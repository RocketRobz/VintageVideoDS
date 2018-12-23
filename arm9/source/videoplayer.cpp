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
 
#include "bios_decompress_callback.h"

#include "frame000.h"
#include "frame001.h"
#include "frame002.h"
#include "frame003.h"
#include "frame004.h"
#include "frame005.h"
#include "frame006.h"
#include "frame007.h"
#include "frame008.h"
#include "frame009.h"
#include "frame010.h"
#include "frame011.h"
#include "frame012.h"
#include "frame013.h"
#include "frame014.h"
#include "frame015.h"
#include "frame016.h"
#include "frame017.h"
#include "frame018.h"
#include "frame019.h"
#include "frame020.h"
#include "frame021.h"
#include "frame022.h"
#include "frame023.h"
#include "frame024.h"
#include "frame025.h"
#include "frame026.h"
#include "frame027.h"
#include "frame028.h"
#include "frame029.h"
#include "frame030.h"
#include "frame031.h"
#include "frame032.h"
#include "frame033.h"
#include "frame034.h"
#include "frame035.h"
#include "frame036.h"
#include "frame037.h"
#include "frame038.h"
#include "frame039.h"
#include "frame040.h"
#include "frame041.h"
#include "frame042.h"
#include "frame043.h"
#include "frame044.h"
#include "frame045.h"
#include "frame046.h"
#include "frame047.h"
#include "frame048.h"
#include "frame049.h"
#include "frame050.h"
#include "frame051.h"
#include "frame052.h"
#include "frame053.h"
#include "frame054.h"
#include "frame055.h"
#include "frame056.h"
#include "frame057.h"
#include "frame058.h"
#include "frame059.h"
#include "frame060.h"
#include "frame061.h"
#include "frame062.h"
#include "frame063.h"
#include "frame064.h"
#include "frame065.h"
#include "frame066.h"
#include "frame067.h"
#include "frame068.h"
#include "frame069.h"
#include "frame070.h"
#include "frame071.h"
#include "frame072.h"
#include "frame073.h"
#include "frame074.h"
#include "frame075.h"
#include "frame076.h"
#include "frame077.h"
#include "frame078.h"
#include "frame079.h"
#include "frame080.h"
#include "frame081.h"
#include "frame082.h"
#include "frame083.h"
#include "frame084.h"
#include "frame085.h"
#include "frame086.h"
#include "frame087.h"
#include "frame088.h"
#include "frame089.h"
#include "frame090.h"
#include "frame091.h"
#include "frame092.h"
#include "frame093.h"
#include "frame094.h"
#include "frame095.h"
#include "frame096.h"
#include "frame097.h"
#include "frame098.h"
#include "frame099.h"
#include "frame100.h"
#include "frame101.h"
#include "frame102.h"
#include "frame103.h"
#include "frame104.h"
#include "frame105.h"
#include "frame106.h"
#include "frame107.h"
#include "frame108.h"
#include "frame109.h"
#include "frame110.h"
#include "frame111.h"
#include "frame112.h"
#include "frame113.h"
#include "frame114.h"
#include "frame115.h"
#include "frame116.h"
#include "frame117.h"
#include "frame118.h"
#include "frame119.h"
#include "frame120.h"
#include "frame121.h"
#include "frame122.h"
#include "frame123.h"
#include "frame124.h"
#include "frame125.h"
#include "frame126.h"
#include "frame127.h"
#include "frame128.h"
#include "frame129.h"
#include "frame130.h"
#include "frame131.h"
#include "frame132.h"
#include "frame133.h"
#include "frame134.h"
#include "frame135.h"
#include "frame136.h"
#include "frame137.h"
#include "frame138.h"
#include "frame139.h"
#include "frame140.h"
#include "frame141.h"
#include "frame142.h"
#include "frame143.h"
#include "frame144.h"
#include "frame145.h"
#include "frame146.h"
#include "frame147.h"
#include "frame148.h"
#include "frame149.h"
#include "frame150.h"
#include "frame151.h"
#include "frame152.h"
#include "frame153.h"
#include "frame154.h"
#include "frame155.h"
#include "frame156.h"
#include "frame157.h"
#include "frame158.h"
#include "frame159.h"
#include "frame160.h"
#include "frame161.h"
#include "frame162.h"
#include "frame163.h"
#include "frame164.h"
#include "frame165.h"
#include "frame166.h"
#include "frame167.h"
#include "frame168.h"
#include "frame169.h"
#include "frame170.h"
#include "frame171.h"
#include "frame172.h"
#include "frame173.h"
#include "frame174.h"
#include "frame175.h"
#include "frame176.h"
#include "frame177.h"
#include "frame178.h"
#include "frame179.h"
#include "frame180.h"
#include "frame181.h"
#include "frame182.h"
#include "frame183.h"
#include "frame184.h"
#include "frame185.h"
#include "frame186.h"
#include "frame187.h"
#include "frame188.h"
#include "frame189.h"
#include "frame190.h"
#include "frame191.h"
#include "frame192.h"
#include "frame193.h"
#include "frame194.h"
#include "frame195.h"
#include "frame196.h"
#include "frame197.h"
#include "frame198.h"
#include "frame199.h"
#include "frame200.h"
#include "frame201.h"
#include "frame202.h"
#include "frame203.h"
#include "frame204.h"
#include "frame205.h"
#include "frame206.h"
#include "frame207.h"
#include "frame208.h"
#include "frame209.h"
#include "frame210.h"
#include "frame211.h"
#include "frame212.h"
#include "frame213.h"
#include "frame214.h"
#include "frame215.h"
#include "frame216.h"
#include "frame217.h"
#include "frame218.h"
#include "frame219.h"
#include "frame220.h"
#include "frame221.h"
#include "frame222.h"
#include "frame223.h"
#include "frame224.h"
#include "frame225.h"
#include "frame226.h"
#include "frame227.h"
#include "frame228.h"
#include "frame229.h"
#include "frame230.h"
#include "frame231.h"
#include "frame232.h"
#include "frame233.h"
#include "frame234.h"
#include "frame235.h"
#include "frame236.h"
#include "frame237.h"
#include "frame238.h"
#include "frame239.h"

#define frameTilesLen 40000
//#define frameMapLen 1536

static unsigned int decompressedTiles[0x8000];
//static unsigned short decompressedMap[768];

void vramcpy_ui (void* dest, const void* src, int size) 
{
	u16* destination = (u16*)dest;
	u16* source = (u16*)src;
	while (size > 0) {
		*destination++ = *source++;
		size-=2;
	}
}

static bool frameTime = true;

void frameDelay(void) {
	for (int i = 0; i < 7+frameTime; i++) { swiWaitForVBlank(); }
	frameTime = !frameTime;
}

void playVideoFrames(int bgId) {

	frameTime = true;

	swiDecompressLZSSVram ((void*)frame000Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame000Pal, BG_PALETTE, frame000PalLen);
	dmaCopy(frame000Map, bgGetMapPtr(bgId), frame000MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame001Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame001Pal, BG_PALETTE, frame001PalLen);
	dmaCopy(frame001Map, bgGetMapPtr(bgId), frame001MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame002Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame002Pal, BG_PALETTE, frame002PalLen);
	dmaCopy(frame002Map, bgGetMapPtr(bgId), frame002MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame003Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame003Pal, BG_PALETTE, frame003PalLen);
	dmaCopy(frame003Map, bgGetMapPtr(bgId), frame003MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame004Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame004Pal, BG_PALETTE, frame004PalLen);
	dmaCopy(frame004Map, bgGetMapPtr(bgId), frame004MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame005Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame005Pal, BG_PALETTE, frame005PalLen);
	dmaCopy(frame005Map, bgGetMapPtr(bgId), frame005MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame006Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame006Pal, BG_PALETTE, frame006PalLen);
	dmaCopy(frame006Map, bgGetMapPtr(bgId), frame006MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame007Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame007Pal, BG_PALETTE, frame007PalLen);
	dmaCopy(frame007Map, bgGetMapPtr(bgId), frame007MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame008Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame008Pal, BG_PALETTE, frame008PalLen);
	dmaCopy(frame008Map, bgGetMapPtr(bgId), frame008MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame009Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame009Pal, BG_PALETTE, frame009PalLen);
	dmaCopy(frame009Map, bgGetMapPtr(bgId), frame009MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame010Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame010Pal, BG_PALETTE, frame010PalLen);
	dmaCopy(frame010Map, bgGetMapPtr(bgId), frame010MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame011Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame011Pal, BG_PALETTE, frame011PalLen);
	dmaCopy(frame011Map, bgGetMapPtr(bgId), frame011MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame012Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame012Pal, BG_PALETTE, frame012PalLen);
	dmaCopy(frame012Map, bgGetMapPtr(bgId), frame012MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame013Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame013Pal, BG_PALETTE, frame013PalLen);
	dmaCopy(frame013Map, bgGetMapPtr(bgId), frame013MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame014Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame014Pal, BG_PALETTE, frame014PalLen);
	dmaCopy(frame014Map, bgGetMapPtr(bgId), frame014MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame015Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame015Pal, BG_PALETTE, frame015PalLen);
	dmaCopy(frame015Map, bgGetMapPtr(bgId), frame015MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame016Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame016Pal, BG_PALETTE, frame016PalLen);
	dmaCopy(frame016Map, bgGetMapPtr(bgId), frame016MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame017Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame017Pal, BG_PALETTE, frame017PalLen);
	dmaCopy(frame017Map, bgGetMapPtr(bgId), frame017MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame018Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame018Pal, BG_PALETTE, frame018PalLen);
	dmaCopy(frame018Map, bgGetMapPtr(bgId), frame018MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame019Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame019Pal, BG_PALETTE, frame019PalLen);
	dmaCopy(frame019Map, bgGetMapPtr(bgId), frame019MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame020Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame020Pal, BG_PALETTE, frame020PalLen);
	dmaCopy(frame020Map, bgGetMapPtr(bgId), frame020MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame021Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame021Pal, BG_PALETTE, frame021PalLen);
	dmaCopy(frame021Map, bgGetMapPtr(bgId), frame021MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame022Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame022Pal, BG_PALETTE, frame022PalLen);
	dmaCopy(frame022Map, bgGetMapPtr(bgId), frame022MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame023Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame023Pal, BG_PALETTE, frame023PalLen);
	dmaCopy(frame023Map, bgGetMapPtr(bgId), frame023MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame024Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame024Pal, BG_PALETTE, frame024PalLen);
	dmaCopy(frame024Map, bgGetMapPtr(bgId), frame024MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame025Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame025Pal, BG_PALETTE, frame025PalLen);
	dmaCopy(frame025Map, bgGetMapPtr(bgId), frame025MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame026Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame026Pal, BG_PALETTE, frame026PalLen);
	dmaCopy(frame026Map, bgGetMapPtr(bgId), frame026MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame027Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame027Pal, BG_PALETTE, frame027PalLen);
	dmaCopy(frame027Map, bgGetMapPtr(bgId), frame027MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame028Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame028Pal, BG_PALETTE, frame028PalLen);
	dmaCopy(frame028Map, bgGetMapPtr(bgId), frame028MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame029Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame029Pal, BG_PALETTE, frame029PalLen);
	dmaCopy(frame029Map, bgGetMapPtr(bgId), frame029MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame030Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame030Pal, BG_PALETTE, frame030PalLen);
	dmaCopy(frame030Map, bgGetMapPtr(bgId), frame030MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame031Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame031Pal, BG_PALETTE, frame031PalLen);
	dmaCopy(frame031Map, bgGetMapPtr(bgId), frame031MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame032Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame032Pal, BG_PALETTE, frame032PalLen);
	dmaCopy(frame032Map, bgGetMapPtr(bgId), frame032MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame033Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame033Pal, BG_PALETTE, frame033PalLen);
	dmaCopy(frame033Map, bgGetMapPtr(bgId), frame033MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame034Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame034Pal, BG_PALETTE, frame034PalLen);
	dmaCopy(frame034Map, bgGetMapPtr(bgId), frame034MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame035Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame035Pal, BG_PALETTE, frame035PalLen);
	dmaCopy(frame035Map, bgGetMapPtr(bgId), frame035MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame036Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame036Pal, BG_PALETTE, frame036PalLen);
	dmaCopy(frame036Map, bgGetMapPtr(bgId), frame036MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame037Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame037Pal, BG_PALETTE, frame037PalLen);
	dmaCopy(frame037Map, bgGetMapPtr(bgId), frame037MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame038Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame038Pal, BG_PALETTE, frame038PalLen);
	dmaCopy(frame038Map, bgGetMapPtr(bgId), frame038MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame039Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame039Pal, BG_PALETTE, frame039PalLen);
	dmaCopy(frame039Map, bgGetMapPtr(bgId), frame039MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame040Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame040Pal, BG_PALETTE, frame040PalLen);
	dmaCopy(frame040Map, bgGetMapPtr(bgId), frame040MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame041Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame041Pal, BG_PALETTE, frame041PalLen);
	dmaCopy(frame041Map, bgGetMapPtr(bgId), frame041MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame042Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame042Pal, BG_PALETTE, frame042PalLen);
	dmaCopy(frame042Map, bgGetMapPtr(bgId), frame042MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame043Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame043Pal, BG_PALETTE, frame043PalLen);
	dmaCopy(frame043Map, bgGetMapPtr(bgId), frame043MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame044Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame044Pal, BG_PALETTE, frame044PalLen);
	dmaCopy(frame044Map, bgGetMapPtr(bgId), frame044MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame045Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame045Pal, BG_PALETTE, frame045PalLen);
	dmaCopy(frame045Map, bgGetMapPtr(bgId), frame045MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame046Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame046Pal, BG_PALETTE, frame046PalLen);
	dmaCopy(frame046Map, bgGetMapPtr(bgId), frame046MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame047Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame047Pal, BG_PALETTE, frame047PalLen);
	dmaCopy(frame047Map, bgGetMapPtr(bgId), frame047MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame048Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame048Pal, BG_PALETTE, frame048PalLen);
	dmaCopy(frame048Map, bgGetMapPtr(bgId), frame048MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame049Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame049Pal, BG_PALETTE, frame049PalLen);
	dmaCopy(frame049Map, bgGetMapPtr(bgId), frame049MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame050Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame050Pal, BG_PALETTE, frame050PalLen);
	dmaCopy(frame050Map, bgGetMapPtr(bgId), frame050MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame051Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame051Pal, BG_PALETTE, frame051PalLen);
	dmaCopy(frame051Map, bgGetMapPtr(bgId), frame051MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame052Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame052Pal, BG_PALETTE, frame052PalLen);
	dmaCopy(frame052Map, bgGetMapPtr(bgId), frame052MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame053Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame053Pal, BG_PALETTE, frame053PalLen);
	dmaCopy(frame053Map, bgGetMapPtr(bgId), frame053MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame054Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame054Pal, BG_PALETTE, frame054PalLen);
	dmaCopy(frame054Map, bgGetMapPtr(bgId), frame054MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame055Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame055Pal, BG_PALETTE, frame055PalLen);
	dmaCopy(frame055Map, bgGetMapPtr(bgId), frame055MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame056Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame056Pal, BG_PALETTE, frame056PalLen);
	dmaCopy(frame056Map, bgGetMapPtr(bgId), frame056MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame057Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame057Pal, BG_PALETTE, frame057PalLen);
	dmaCopy(frame057Map, bgGetMapPtr(bgId), frame057MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame058Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame058Pal, BG_PALETTE, frame058PalLen);
	dmaCopy(frame058Map, bgGetMapPtr(bgId), frame058MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame059Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame059Pal, BG_PALETTE, frame059PalLen);
	dmaCopy(frame059Map, bgGetMapPtr(bgId), frame059MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame060Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame060Pal, BG_PALETTE, frame060PalLen);
	dmaCopy(frame060Map, bgGetMapPtr(bgId), frame060MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame061Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame061Pal, BG_PALETTE, frame061PalLen);
	dmaCopy(frame061Map, bgGetMapPtr(bgId), frame061MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame062Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame062Pal, BG_PALETTE, frame062PalLen);
	dmaCopy(frame062Map, bgGetMapPtr(bgId), frame062MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame063Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame063Pal, BG_PALETTE, frame063PalLen);
	dmaCopy(frame063Map, bgGetMapPtr(bgId), frame063MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame064Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame064Pal, BG_PALETTE, frame064PalLen);
	dmaCopy(frame064Map, bgGetMapPtr(bgId), frame064MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame065Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame065Pal, BG_PALETTE, frame065PalLen);
	dmaCopy(frame065Map, bgGetMapPtr(bgId), frame065MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame066Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame066Pal, BG_PALETTE, frame066PalLen);
	dmaCopy(frame066Map, bgGetMapPtr(bgId), frame066MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame067Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame067Pal, BG_PALETTE, frame067PalLen);
	dmaCopy(frame067Map, bgGetMapPtr(bgId), frame067MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame068Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame068Pal, BG_PALETTE, frame068PalLen);
	dmaCopy(frame068Map, bgGetMapPtr(bgId), frame068MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame069Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame069Pal, BG_PALETTE, frame069PalLen);
	dmaCopy(frame069Map, bgGetMapPtr(bgId), frame069MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame070Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame070Pal, BG_PALETTE, frame070PalLen);
	dmaCopy(frame070Map, bgGetMapPtr(bgId), frame070MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame071Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame071Pal, BG_PALETTE, frame071PalLen);
	dmaCopy(frame071Map, bgGetMapPtr(bgId), frame071MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame072Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame072Pal, BG_PALETTE, frame072PalLen);
	dmaCopy(frame072Map, bgGetMapPtr(bgId), frame072MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame073Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame073Pal, BG_PALETTE, frame073PalLen);
	dmaCopy(frame073Map, bgGetMapPtr(bgId), frame073MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame074Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame074Pal, BG_PALETTE, frame074PalLen);
	dmaCopy(frame074Map, bgGetMapPtr(bgId), frame074MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame075Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame075Pal, BG_PALETTE, frame075PalLen);
	dmaCopy(frame075Map, bgGetMapPtr(bgId), frame075MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame076Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame076Pal, BG_PALETTE, frame076PalLen);
	dmaCopy(frame076Map, bgGetMapPtr(bgId), frame076MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame077Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame077Pal, BG_PALETTE, frame077PalLen);
	dmaCopy(frame077Map, bgGetMapPtr(bgId), frame077MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame078Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame078Pal, BG_PALETTE, frame078PalLen);
	dmaCopy(frame078Map, bgGetMapPtr(bgId), frame078MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame079Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame079Pal, BG_PALETTE, frame079PalLen);
	dmaCopy(frame079Map, bgGetMapPtr(bgId), frame079MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame080Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame080Pal, BG_PALETTE, frame080PalLen);
	dmaCopy(frame080Map, bgGetMapPtr(bgId), frame080MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame081Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame081Pal, BG_PALETTE, frame081PalLen);
	dmaCopy(frame081Map, bgGetMapPtr(bgId), frame081MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame082Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame082Pal, BG_PALETTE, frame082PalLen);
	dmaCopy(frame082Map, bgGetMapPtr(bgId), frame082MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame083Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame083Pal, BG_PALETTE, frame083PalLen);
	dmaCopy(frame083Map, bgGetMapPtr(bgId), frame083MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame084Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame084Pal, BG_PALETTE, frame084PalLen);
	dmaCopy(frame084Map, bgGetMapPtr(bgId), frame084MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame085Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame085Pal, BG_PALETTE, frame085PalLen);
	dmaCopy(frame085Map, bgGetMapPtr(bgId), frame085MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame086Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame086Pal, BG_PALETTE, frame086PalLen);
	dmaCopy(frame086Map, bgGetMapPtr(bgId), frame086MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame087Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame087Pal, BG_PALETTE, frame087PalLen);
	dmaCopy(frame087Map, bgGetMapPtr(bgId), frame087MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame088Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame088Pal, BG_PALETTE, frame088PalLen);
	dmaCopy(frame088Map, bgGetMapPtr(bgId), frame088MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame089Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame089Pal, BG_PALETTE, frame089PalLen);
	dmaCopy(frame089Map, bgGetMapPtr(bgId), frame089MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame090Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame090Pal, BG_PALETTE, frame090PalLen);
	dmaCopy(frame090Map, bgGetMapPtr(bgId), frame090MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame091Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame091Pal, BG_PALETTE, frame091PalLen);
	dmaCopy(frame091Map, bgGetMapPtr(bgId), frame091MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame092Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame092Pal, BG_PALETTE, frame092PalLen);
	dmaCopy(frame092Map, bgGetMapPtr(bgId), frame092MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame093Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame093Pal, BG_PALETTE, frame093PalLen);
	dmaCopy(frame093Map, bgGetMapPtr(bgId), frame093MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame094Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame094Pal, BG_PALETTE, frame094PalLen);
	dmaCopy(frame094Map, bgGetMapPtr(bgId), frame094MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame095Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame095Pal, BG_PALETTE, frame095PalLen);
	dmaCopy(frame095Map, bgGetMapPtr(bgId), frame095MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame096Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame096Pal, BG_PALETTE, frame096PalLen);
	dmaCopy(frame096Map, bgGetMapPtr(bgId), frame096MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame097Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame097Pal, BG_PALETTE, frame097PalLen);
	dmaCopy(frame097Map, bgGetMapPtr(bgId), frame097MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame098Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame098Pal, BG_PALETTE, frame098PalLen);
	dmaCopy(frame098Map, bgGetMapPtr(bgId), frame098MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame099Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame099Pal, BG_PALETTE, frame099PalLen);
	dmaCopy(frame099Map, bgGetMapPtr(bgId), frame099MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame100Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame100Pal, BG_PALETTE, frame100PalLen);
	dmaCopy(frame100Map, bgGetMapPtr(bgId), frame100MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame101Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame101Pal, BG_PALETTE, frame101PalLen);
	dmaCopy(frame101Map, bgGetMapPtr(bgId), frame101MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame102Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame102Pal, BG_PALETTE, frame102PalLen);
	dmaCopy(frame102Map, bgGetMapPtr(bgId), frame102MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame103Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame103Pal, BG_PALETTE, frame103PalLen);
	dmaCopy(frame103Map, bgGetMapPtr(bgId), frame103MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame104Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame104Pal, BG_PALETTE, frame104PalLen);
	dmaCopy(frame104Map, bgGetMapPtr(bgId), frame104MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame105Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame105Pal, BG_PALETTE, frame105PalLen);
	dmaCopy(frame105Map, bgGetMapPtr(bgId), frame105MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame106Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame106Pal, BG_PALETTE, frame106PalLen);
	dmaCopy(frame106Map, bgGetMapPtr(bgId), frame106MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame107Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame107Pal, BG_PALETTE, frame107PalLen);
	dmaCopy(frame107Map, bgGetMapPtr(bgId), frame107MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame108Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame108Pal, BG_PALETTE, frame108PalLen);
	dmaCopy(frame108Map, bgGetMapPtr(bgId), frame108MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame109Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame109Pal, BG_PALETTE, frame109PalLen);
	dmaCopy(frame109Map, bgGetMapPtr(bgId), frame109MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame110Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame110Pal, BG_PALETTE, frame110PalLen);
	dmaCopy(frame110Map, bgGetMapPtr(bgId), frame110MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame111Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame111Pal, BG_PALETTE, frame111PalLen);
	dmaCopy(frame111Map, bgGetMapPtr(bgId), frame111MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame112Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame112Pal, BG_PALETTE, frame112PalLen);
	dmaCopy(frame112Map, bgGetMapPtr(bgId), frame112MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame113Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame113Pal, BG_PALETTE, frame113PalLen);
	dmaCopy(frame113Map, bgGetMapPtr(bgId), frame113MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame114Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame114Pal, BG_PALETTE, frame114PalLen);
	dmaCopy(frame114Map, bgGetMapPtr(bgId), frame114MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame115Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame115Pal, BG_PALETTE, frame115PalLen);
	dmaCopy(frame115Map, bgGetMapPtr(bgId), frame115MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame116Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame116Pal, BG_PALETTE, frame116PalLen);
	dmaCopy(frame116Map, bgGetMapPtr(bgId), frame116MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame117Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame117Pal, BG_PALETTE, frame117PalLen);
	dmaCopy(frame117Map, bgGetMapPtr(bgId), frame117MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame118Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame118Pal, BG_PALETTE, frame118PalLen);
	dmaCopy(frame118Map, bgGetMapPtr(bgId), frame118MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame119Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame119Pal, BG_PALETTE, frame119PalLen);
	dmaCopy(frame119Map, bgGetMapPtr(bgId), frame119MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame120Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame120Pal, BG_PALETTE, frame120PalLen);
	dmaCopy(frame120Map, bgGetMapPtr(bgId), frame120MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame121Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame121Pal, BG_PALETTE, frame121PalLen);
	dmaCopy(frame121Map, bgGetMapPtr(bgId), frame121MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame122Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame122Pal, BG_PALETTE, frame122PalLen);
	dmaCopy(frame122Map, bgGetMapPtr(bgId), frame122MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame123Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame123Pal, BG_PALETTE, frame123PalLen);
	dmaCopy(frame123Map, bgGetMapPtr(bgId), frame123MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame124Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame124Pal, BG_PALETTE, frame124PalLen);
	dmaCopy(frame124Map, bgGetMapPtr(bgId), frame124MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame125Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame125Pal, BG_PALETTE, frame125PalLen);
	dmaCopy(frame125Map, bgGetMapPtr(bgId), frame125MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame126Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame126Pal, BG_PALETTE, frame126PalLen);
	dmaCopy(frame126Map, bgGetMapPtr(bgId), frame126MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame127Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame127Pal, BG_PALETTE, frame127PalLen);
	dmaCopy(frame127Map, bgGetMapPtr(bgId), frame127MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame128Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame128Pal, BG_PALETTE, frame128PalLen);
	dmaCopy(frame128Map, bgGetMapPtr(bgId), frame128MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame129Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame129Pal, BG_PALETTE, frame129PalLen);
	dmaCopy(frame129Map, bgGetMapPtr(bgId), frame129MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame130Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame130Pal, BG_PALETTE, frame130PalLen);
	dmaCopy(frame130Map, bgGetMapPtr(bgId), frame130MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame131Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame131Pal, BG_PALETTE, frame131PalLen);
	dmaCopy(frame131Map, bgGetMapPtr(bgId), frame131MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame132Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame132Pal, BG_PALETTE, frame132PalLen);
	dmaCopy(frame132Map, bgGetMapPtr(bgId), frame132MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame133Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame133Pal, BG_PALETTE, frame133PalLen);
	dmaCopy(frame133Map, bgGetMapPtr(bgId), frame133MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame134Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame134Pal, BG_PALETTE, frame134PalLen);
	dmaCopy(frame134Map, bgGetMapPtr(bgId), frame134MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame135Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame135Pal, BG_PALETTE, frame135PalLen);
	dmaCopy(frame135Map, bgGetMapPtr(bgId), frame135MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame136Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame136Pal, BG_PALETTE, frame136PalLen);
	dmaCopy(frame136Map, bgGetMapPtr(bgId), frame136MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame137Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame137Pal, BG_PALETTE, frame137PalLen);
	dmaCopy(frame137Map, bgGetMapPtr(bgId), frame137MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame138Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame138Pal, BG_PALETTE, frame138PalLen);
	dmaCopy(frame138Map, bgGetMapPtr(bgId), frame138MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame139Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame139Pal, BG_PALETTE, frame139PalLen);
	dmaCopy(frame139Map, bgGetMapPtr(bgId), frame139MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame140Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame140Pal, BG_PALETTE, frame140PalLen);
	dmaCopy(frame140Map, bgGetMapPtr(bgId), frame140MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame141Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame141Pal, BG_PALETTE, frame141PalLen);
	dmaCopy(frame141Map, bgGetMapPtr(bgId), frame141MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame142Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame142Pal, BG_PALETTE, frame142PalLen);
	dmaCopy(frame142Map, bgGetMapPtr(bgId), frame142MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame143Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame143Pal, BG_PALETTE, frame143PalLen);
	dmaCopy(frame143Map, bgGetMapPtr(bgId), frame143MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame144Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame144Pal, BG_PALETTE, frame144PalLen);
	dmaCopy(frame144Map, bgGetMapPtr(bgId), frame144MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame145Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame145Pal, BG_PALETTE, frame145PalLen);
	dmaCopy(frame145Map, bgGetMapPtr(bgId), frame145MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame146Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame146Pal, BG_PALETTE, frame146PalLen);
	dmaCopy(frame146Map, bgGetMapPtr(bgId), frame146MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame147Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame147Pal, BG_PALETTE, frame147PalLen);
	dmaCopy(frame147Map, bgGetMapPtr(bgId), frame147MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame148Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame148Pal, BG_PALETTE, frame148PalLen);
	dmaCopy(frame148Map, bgGetMapPtr(bgId), frame148MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame149Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame149Pal, BG_PALETTE, frame149PalLen);
	dmaCopy(frame149Map, bgGetMapPtr(bgId), frame149MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame150Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame150Pal, BG_PALETTE, frame150PalLen);
	dmaCopy(frame150Map, bgGetMapPtr(bgId), frame150MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame151Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame151Pal, BG_PALETTE, frame151PalLen);
	dmaCopy(frame151Map, bgGetMapPtr(bgId), frame151MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame152Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame152Pal, BG_PALETTE, frame152PalLen);
	dmaCopy(frame152Map, bgGetMapPtr(bgId), frame152MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame153Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame153Pal, BG_PALETTE, frame153PalLen);
	dmaCopy(frame153Map, bgGetMapPtr(bgId), frame153MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame154Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame154Pal, BG_PALETTE, frame154PalLen);
	dmaCopy(frame154Map, bgGetMapPtr(bgId), frame154MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame155Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame155Pal, BG_PALETTE, frame155PalLen);
	dmaCopy(frame155Map, bgGetMapPtr(bgId), frame155MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame156Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame156Pal, BG_PALETTE, frame156PalLen);
	dmaCopy(frame156Map, bgGetMapPtr(bgId), frame156MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame157Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame157Pal, BG_PALETTE, frame157PalLen);
	dmaCopy(frame157Map, bgGetMapPtr(bgId), frame157MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame158Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame158Pal, BG_PALETTE, frame158PalLen);
	dmaCopy(frame158Map, bgGetMapPtr(bgId), frame158MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame159Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame159Pal, BG_PALETTE, frame159PalLen);
	dmaCopy(frame159Map, bgGetMapPtr(bgId), frame159MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame160Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame160Pal, BG_PALETTE, frame160PalLen);
	dmaCopy(frame160Map, bgGetMapPtr(bgId), frame160MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame161Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame161Pal, BG_PALETTE, frame161PalLen);
	dmaCopy(frame161Map, bgGetMapPtr(bgId), frame161MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame162Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame162Pal, BG_PALETTE, frame162PalLen);
	dmaCopy(frame162Map, bgGetMapPtr(bgId), frame162MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame163Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame163Pal, BG_PALETTE, frame163PalLen);
	dmaCopy(frame163Map, bgGetMapPtr(bgId), frame163MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame164Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame164Pal, BG_PALETTE, frame164PalLen);
	dmaCopy(frame164Map, bgGetMapPtr(bgId), frame164MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame165Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame165Pal, BG_PALETTE, frame165PalLen);
	dmaCopy(frame165Map, bgGetMapPtr(bgId), frame165MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame166Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame166Pal, BG_PALETTE, frame166PalLen);
	dmaCopy(frame166Map, bgGetMapPtr(bgId), frame166MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame167Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame167Pal, BG_PALETTE, frame167PalLen);
	dmaCopy(frame167Map, bgGetMapPtr(bgId), frame167MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame168Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame168Pal, BG_PALETTE, frame168PalLen);
	dmaCopy(frame168Map, bgGetMapPtr(bgId), frame168MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame169Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame169Pal, BG_PALETTE, frame169PalLen);
	dmaCopy(frame169Map, bgGetMapPtr(bgId), frame169MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame170Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame170Pal, BG_PALETTE, frame170PalLen);
	dmaCopy(frame170Map, bgGetMapPtr(bgId), frame170MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame171Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame171Pal, BG_PALETTE, frame171PalLen);
	dmaCopy(frame171Map, bgGetMapPtr(bgId), frame171MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame172Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame172Pal, BG_PALETTE, frame172PalLen);
	dmaCopy(frame172Map, bgGetMapPtr(bgId), frame172MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame173Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame173Pal, BG_PALETTE, frame173PalLen);
	dmaCopy(frame173Map, bgGetMapPtr(bgId), frame173MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame174Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame174Pal, BG_PALETTE, frame174PalLen);
	dmaCopy(frame174Map, bgGetMapPtr(bgId), frame174MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame175Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame175Pal, BG_PALETTE, frame175PalLen);
	dmaCopy(frame175Map, bgGetMapPtr(bgId), frame175MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame176Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame176Pal, BG_PALETTE, frame176PalLen);
	dmaCopy(frame176Map, bgGetMapPtr(bgId), frame176MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame177Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame177Pal, BG_PALETTE, frame177PalLen);
	dmaCopy(frame177Map, bgGetMapPtr(bgId), frame177MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame178Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame178Pal, BG_PALETTE, frame178PalLen);
	dmaCopy(frame178Map, bgGetMapPtr(bgId), frame178MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame179Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame179Pal, BG_PALETTE, frame179PalLen);
	dmaCopy(frame179Map, bgGetMapPtr(bgId), frame179MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame180Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame180Pal, BG_PALETTE, frame180PalLen);
	dmaCopy(frame180Map, bgGetMapPtr(bgId), frame180MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame181Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame181Pal, BG_PALETTE, frame181PalLen);
	dmaCopy(frame181Map, bgGetMapPtr(bgId), frame181MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame182Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame182Pal, BG_PALETTE, frame182PalLen);
	dmaCopy(frame182Map, bgGetMapPtr(bgId), frame182MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame183Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame183Pal, BG_PALETTE, frame183PalLen);
	dmaCopy(frame183Map, bgGetMapPtr(bgId), frame183MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame184Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame184Pal, BG_PALETTE, frame184PalLen);
	dmaCopy(frame184Map, bgGetMapPtr(bgId), frame184MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame185Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame185Pal, BG_PALETTE, frame185PalLen);
	dmaCopy(frame185Map, bgGetMapPtr(bgId), frame185MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame186Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame186Pal, BG_PALETTE, frame186PalLen);
	dmaCopy(frame186Map, bgGetMapPtr(bgId), frame186MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame187Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame187Pal, BG_PALETTE, frame187PalLen);
	dmaCopy(frame187Map, bgGetMapPtr(bgId), frame187MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame188Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame188Pal, BG_PALETTE, frame188PalLen);
	dmaCopy(frame188Map, bgGetMapPtr(bgId), frame188MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame189Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame189Pal, BG_PALETTE, frame189PalLen);
	dmaCopy(frame189Map, bgGetMapPtr(bgId), frame189MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame190Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame190Pal, BG_PALETTE, frame190PalLen);
	dmaCopy(frame190Map, bgGetMapPtr(bgId), frame190MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame191Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame191Pal, BG_PALETTE, frame191PalLen);
	dmaCopy(frame191Map, bgGetMapPtr(bgId), frame191MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame192Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame192Pal, BG_PALETTE, frame192PalLen);
	dmaCopy(frame192Map, bgGetMapPtr(bgId), frame192MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame193Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame193Pal, BG_PALETTE, frame193PalLen);
	dmaCopy(frame193Map, bgGetMapPtr(bgId), frame193MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame194Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame194Pal, BG_PALETTE, frame194PalLen);
	dmaCopy(frame194Map, bgGetMapPtr(bgId), frame194MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame195Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame195Pal, BG_PALETTE, frame195PalLen);
	dmaCopy(frame195Map, bgGetMapPtr(bgId), frame195MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame196Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame196Pal, BG_PALETTE, frame196PalLen);
	dmaCopy(frame196Map, bgGetMapPtr(bgId), frame196MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame197Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame197Pal, BG_PALETTE, frame197PalLen);
	dmaCopy(frame197Map, bgGetMapPtr(bgId), frame197MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame198Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame198Pal, BG_PALETTE, frame198PalLen);
	dmaCopy(frame198Map, bgGetMapPtr(bgId), frame198MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame199Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame199Pal, BG_PALETTE, frame199PalLen);
	dmaCopy(frame199Map, bgGetMapPtr(bgId), frame199MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame200Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame200Pal, BG_PALETTE, frame200PalLen);
	dmaCopy(frame200Map, bgGetMapPtr(bgId), frame200MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame201Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame201Pal, BG_PALETTE, frame201PalLen);
	dmaCopy(frame201Map, bgGetMapPtr(bgId), frame201MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame202Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame202Pal, BG_PALETTE, frame202PalLen);
	dmaCopy(frame202Map, bgGetMapPtr(bgId), frame202MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame203Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame203Pal, BG_PALETTE, frame203PalLen);
	dmaCopy(frame203Map, bgGetMapPtr(bgId), frame203MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame204Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame204Pal, BG_PALETTE, frame204PalLen);
	dmaCopy(frame204Map, bgGetMapPtr(bgId), frame204MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame205Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame205Pal, BG_PALETTE, frame205PalLen);
	dmaCopy(frame205Map, bgGetMapPtr(bgId), frame205MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame206Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame206Pal, BG_PALETTE, frame206PalLen);
	dmaCopy(frame206Map, bgGetMapPtr(bgId), frame206MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame207Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame207Pal, BG_PALETTE, frame207PalLen);
	dmaCopy(frame207Map, bgGetMapPtr(bgId), frame207MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame208Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame208Pal, BG_PALETTE, frame208PalLen);
	dmaCopy(frame208Map, bgGetMapPtr(bgId), frame208MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame209Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame209Pal, BG_PALETTE, frame209PalLen);
	dmaCopy(frame209Map, bgGetMapPtr(bgId), frame209MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame210Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame210Pal, BG_PALETTE, frame210PalLen);
	dmaCopy(frame210Map, bgGetMapPtr(bgId), frame210MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame211Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame211Pal, BG_PALETTE, frame211PalLen);
	dmaCopy(frame211Map, bgGetMapPtr(bgId), frame211MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame212Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame212Pal, BG_PALETTE, frame212PalLen);
	dmaCopy(frame212Map, bgGetMapPtr(bgId), frame212MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame213Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame213Pal, BG_PALETTE, frame213PalLen);
	dmaCopy(frame213Map, bgGetMapPtr(bgId), frame213MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame214Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame214Pal, BG_PALETTE, frame214PalLen);
	dmaCopy(frame214Map, bgGetMapPtr(bgId), frame214MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame215Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame215Pal, BG_PALETTE, frame215PalLen);
	dmaCopy(frame215Map, bgGetMapPtr(bgId), frame215MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame216Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame216Pal, BG_PALETTE, frame216PalLen);
	dmaCopy(frame216Map, bgGetMapPtr(bgId), frame216MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame217Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame217Pal, BG_PALETTE, frame217PalLen);
	dmaCopy(frame217Map, bgGetMapPtr(bgId), frame217MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame218Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame218Pal, BG_PALETTE, frame218PalLen);
	dmaCopy(frame218Map, bgGetMapPtr(bgId), frame218MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame219Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame219Pal, BG_PALETTE, frame219PalLen);
	dmaCopy(frame219Map, bgGetMapPtr(bgId), frame219MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame220Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame220Pal, BG_PALETTE, frame220PalLen);
	dmaCopy(frame220Map, bgGetMapPtr(bgId), frame220MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame221Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame221Pal, BG_PALETTE, frame221PalLen);
	dmaCopy(frame221Map, bgGetMapPtr(bgId), frame221MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame222Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame222Pal, BG_PALETTE, frame222PalLen);
	dmaCopy(frame222Map, bgGetMapPtr(bgId), frame222MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame223Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame223Pal, BG_PALETTE, frame223PalLen);
	dmaCopy(frame223Map, bgGetMapPtr(bgId), frame223MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame224Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame224Pal, BG_PALETTE, frame224PalLen);
	dmaCopy(frame224Map, bgGetMapPtr(bgId), frame224MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame225Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame225Pal, BG_PALETTE, frame225PalLen);
	dmaCopy(frame225Map, bgGetMapPtr(bgId), frame225MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame226Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame226Pal, BG_PALETTE, frame226PalLen);
	dmaCopy(frame226Map, bgGetMapPtr(bgId), frame226MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame227Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame227Pal, BG_PALETTE, frame227PalLen);
	dmaCopy(frame227Map, bgGetMapPtr(bgId), frame227MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame228Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame228Pal, BG_PALETTE, frame228PalLen);
	dmaCopy(frame228Map, bgGetMapPtr(bgId), frame228MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame229Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame229Pal, BG_PALETTE, frame229PalLen);
	dmaCopy(frame229Map, bgGetMapPtr(bgId), frame229MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame230Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame230Pal, BG_PALETTE, frame230PalLen);
	dmaCopy(frame230Map, bgGetMapPtr(bgId), frame230MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame231Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame231Pal, BG_PALETTE, frame231PalLen);
	dmaCopy(frame231Map, bgGetMapPtr(bgId), frame231MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame232Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame232Pal, BG_PALETTE, frame232PalLen);
	dmaCopy(frame232Map, bgGetMapPtr(bgId), frame232MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame233Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame233Pal, BG_PALETTE, frame233PalLen);
	dmaCopy(frame233Map, bgGetMapPtr(bgId), frame233MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame234Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame234Pal, BG_PALETTE, frame234PalLen);
	dmaCopy(frame234Map, bgGetMapPtr(bgId), frame234MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame235Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame235Pal, BG_PALETTE, frame235PalLen);
	dmaCopy(frame235Map, bgGetMapPtr(bgId), frame235MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame236Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame236Pal, BG_PALETTE, frame236PalLen);
	dmaCopy(frame236Map, bgGetMapPtr(bgId), frame236MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame237Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame237Pal, BG_PALETTE, frame237PalLen);
	dmaCopy(frame237Map, bgGetMapPtr(bgId), frame237MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame238Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame238Pal, BG_PALETTE, frame238PalLen);
	dmaCopy(frame238Map, bgGetMapPtr(bgId), frame238MapLen);

	frameDelay();

	swiDecompressLZSSVram ((void*)frame239Tiles, (void*)decompressedTiles, 0, &decompressBiosCallback);
	dmaCopy(decompressedTiles, bgGetGfxPtr(bgId), frameTilesLen);
	dmaCopy(frame239Pal, BG_PALETTE, frame239PalLen);
	dmaCopy(frame239Map, bgGetMapPtr(bgId), frame239MapLen);

	frameDelay();

}
