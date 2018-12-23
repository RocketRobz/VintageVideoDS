/*
    NitroHax -- Cheat tool for the Nintendo DS
    Copyright (C) 2008  Michael "Chishm" Chisholm

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <nds.h>
#include <fat.h>
#include <nds/fifocommon.h>
#include <maxmod9.h>

#include <stdio.h>
#include <string.h>
#include <malloc.h>

extern void playVideoFrames (int bgId);

#include "soundbank.h"
#include "soundbank_bin.h"

#define CONSOLE_SCREEN_WIDTH 32
#define CONSOLE_SCREEN_HEIGHT 24

#define titleText "Vintage Video DS, by RocketRobz\n"
#define warningText "WARNING:\nVideo may go out of sync.\nTo avoid this issue, run this\nin DSi mode.\n"

static mm_sound_effect snd_video;

static int videoBg;

int main() {

	videoSetMode(MODE_0_2D | DISPLAY_BG2_ACTIVE);

	vramSetBankA (VRAM_A_MAIN_BG_0x06000000);
	vramSetBankC (VRAM_C_SUB_BG_0x06200000);

	videoBg = bgInit(2, BgType_Text4bpp, BgSize_T_256x256, 0,1);
	
	consoleDemoInit();

	mmInitDefaultMem((mm_addr)soundbank_bin);

	mmLoadEffect( SFX_VIDEO );

	snd_video = {
		{ SFX_VIDEO } ,			// id
		(int)(1.0f * (1<<10)),	// rate
		0,		// handle
		255,	// volume
		128,	// panning
	};

	int pressed = 0;

	while(1) {
		consoleClear();
		printf(titleText);
		printf("\n");
		if (!isDSiMode()) {
			printf(warningText);
			printf("\n");
		}
		printf("A: Play\n");

		do
		{
			scanKeys();
			pressed = keysDown();
			swiWaitForVBlank();
		}
		while (!(pressed & KEY_A));

		consoleClear();
		printf(titleText);
		printf("\n");
		if (!isDSiMode()) {
			printf(warningText);
			printf("\n");
		}
		printf("Playing...\n");

		mmEffectEx(&snd_video);
		playVideoFrames(videoBg);
		mmEffectCancelAll();
	}
	return 0;
}

