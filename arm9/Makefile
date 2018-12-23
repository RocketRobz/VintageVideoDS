#---------------------------------------------------------------------------------
.SUFFIXES:
#---------------------------------------------------------------------------------
ifeq ($(strip $(DEVKITARM)),)
$(error "Please set DEVKITARM in your environment. export DEVKITARM=<path to>devkitARM")
endif

include $(DEVKITARM)/ds_rules

#---------------------------------------------------------------------------------
# BUILD is the directory where object files & intermediate files will be placed
# SOURCES is a list of directories containing source code
# INCLUDES is a list of directories containing extra header files
# DATA is a list of directories containing binary files
# all directories are relative to this makefile
#---------------------------------------------------------------------------------
BUILD		:=	build
IMAGES		:=	graphics
SOURCES		:=	source $(IMG_DATA)
INCLUDES	:=	include
DATA		:=	data
MUSIC       :=  music

#---------------------------------------------------------------------------------
# options for code generation
#---------------------------------------------------------------------------------
ARCH	:=	-march=armv5te -mtune=arm946e-s -mthumb -mthumb-interwork

CFLAGS	:=	-g -Wall -O2\
 			-fomit-frame-pointer\
			-ffast-math \
			-Wall -Wextra -Werror \
			$(ARCH)

CFLAGS	+=	$(INCLUDE) -DARM9 -fno-strict-aliasing
CXXFLAGS	:=	$(CFLAGS)

ASFLAGS	:=	-g $(ARCH) $(INCLUDE)

LDFLAGS	=	-specs=ds_arm9.specs -g $(ARCH) -Wl,-Map,$(notdir $*.map)

#---------------------------------------------------------------------------------
# any extra libraries we wish to link with the project
#---------------------------------------------------------------------------------
LIBS	:= -lmm9 -lnds9
 
#---------------------------------------------------------------------------------
# list of directories containing libraries, this must be the top level containing
# include and lib
#---------------------------------------------------------------------------------
LIBDIRS	:=	$(LIBNDS)
 
#---------------------------------------------------------------------------------
# no real need to edit anything past this point unless you need to add additional
# rules for different file extensions
#---------------------------------------------------------------------------------
ifneq ($(BUILD),$(notdir $(CURDIR)))
#---------------------------------------------------------------------------------
 
export ARM9BIN	:=	$(TOPDIR)/$(TARGET).arm9
export ARM9ELF	:=	$(CURDIR)/$(TARGET).arm9.elf
export DEPSDIR := $(CURDIR)/$(BUILD)

export AUDIOFILES	:=	$(foreach dir,$(notdir $(wildcard $(MUSIC)/*.*)),$(CURDIR)/$(MUSIC)/$(dir))

export VPATH	:=	$(foreach dir,$(SOURCES),$(CURDIR)/$(dir)) \
					$(foreach dir,$(DATA),$(CURDIR)/$(dir))
 
CFILES		:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.c)))
CPPFILES	:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.cpp)))
SFILES		:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.s)))
BINFILES	:=	$(foreach dir,$(DATA),$(notdir $(wildcard $(dir)/*.*))) soundbank.bin

BMPFILES	:=	$(foreach dir,$(IMAGES),$(notdir $(wildcard $(dir)/*.bmp)))
PNGFILES	:=	$(foreach dir,$(IMAGES),$(notdir $(wildcard $(dir)/*.png)))

#---------------------------------------------------------------------------------
# use CXX for linking C++ projects, CC for standard C
#---------------------------------------------------------------------------------
ifeq ($(strip $(CPPFILES)),)
#---------------------------------------------------------------------------------
	export LD	:=	$(CC)
#---------------------------------------------------------------------------------
else
#---------------------------------------------------------------------------------
	export LD	:=	$(CXX)
#---------------------------------------------------------------------------------
endif
#---------------------------------------------------------------------------------

export OFILES	:=	$(addsuffix .o,$(BINFILES)) $(BMPFILES:.bmp=.o) $(PNGFILES:.png=.o) \
					$(CPPFILES:.cpp=.o) $(CFILES:.c=.o) $(SFILES:.s=.o)
 
export INCLUDE	:=	$(foreach dir,$(INCLUDES),-I$(CURDIR)/$(dir)) \
			$(foreach dir,$(LIBDIRS),-I$(dir)/include) \
			-I$(CURDIR)/$(BUILD)
 
export LIBPATHS	:=	$(foreach dir,$(LIBDIRS),-L$(dir)/lib)
 
.PHONY: $(BUILD) clean
 
#---------------------------------------------------------------------------------
$(BUILD):
	@[ -d $@ ] || mkdir -p $@
	@make --no-print-directory -C $(BUILD) -f $(CURDIR)/Makefile
 
#---------------------------------------------------------------------------------
clean:
	@echo clean ...
	@rm -fr $(BUILD) *.elf *.nds* *.bin 
	@rm -fr $(DATA) *.elf *.nds* *.bin 
 
#---------------------------------------------------------------------------------
else
 
DEPENDS	:=	$(OFILES:.o=.d)
 
#---------------------------------------------------------------------------------
# main targets
#---------------------------------------------------------------------------------
$(ARM9BIN)	:	$(ARM9ELF) 
	@$(OBJCOPY) -O binary $< $@
	@echo built ... $(notdir $@)

$(ARM9ELF)	:	$(OFILES)
	@echo linking $(notdir $@)
	@$(LD)  $(LDFLAGS) $(OFILES) $(LIBPATHS) $(LIBS) -o $@


#---------------------------------------------------------------------------------
# graphics
#---------------------------------------------------------------------------------
frame000.s			:	../$(IMAGES)/frame000.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame001.s			:	../$(IMAGES)/frame001.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame002.s			:	../$(IMAGES)/frame002.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame003.s			:	../$(IMAGES)/frame003.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame004.s			:	../$(IMAGES)/frame004.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame005.s			:	../$(IMAGES)/frame005.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame006.s			:	../$(IMAGES)/frame006.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame007.s			:	../$(IMAGES)/frame007.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame008.s			:	../$(IMAGES)/frame008.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame009.s			:	../$(IMAGES)/frame009.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame010.s			:	../$(IMAGES)/frame010.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame011.s			:	../$(IMAGES)/frame011.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame012.s			:	../$(IMAGES)/frame012.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame013.s			:	../$(IMAGES)/frame013.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame014.s			:	../$(IMAGES)/frame014.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame015.s			:	../$(IMAGES)/frame015.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame016.s			:	../$(IMAGES)/frame016.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame017.s			:	../$(IMAGES)/frame017.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame018.s			:	../$(IMAGES)/frame018.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame019.s			:	../$(IMAGES)/frame019.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame020.s			:	../$(IMAGES)/frame020.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame021.s			:	../$(IMAGES)/frame021.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame022.s			:	../$(IMAGES)/frame022.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame023.s			:	../$(IMAGES)/frame023.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame024.s			:	../$(IMAGES)/frame024.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame025.s			:	../$(IMAGES)/frame025.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame026.s			:	../$(IMAGES)/frame026.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame027.s			:	../$(IMAGES)/frame027.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame028.s			:	../$(IMAGES)/frame028.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame029.s			:	../$(IMAGES)/frame029.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame030.s			:	../$(IMAGES)/frame030.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame031.s			:	../$(IMAGES)/frame031.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame032.s			:	../$(IMAGES)/frame032.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame033.s			:	../$(IMAGES)/frame033.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame034.s			:	../$(IMAGES)/frame034.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame035.s			:	../$(IMAGES)/frame035.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame036.s			:	../$(IMAGES)/frame036.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame037.s			:	../$(IMAGES)/frame037.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame038.s			:	../$(IMAGES)/frame038.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame039.s			:	../$(IMAGES)/frame039.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame040.s			:	../$(IMAGES)/frame040.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame041.s			:	../$(IMAGES)/frame041.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame042.s			:	../$(IMAGES)/frame042.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame043.s			:	../$(IMAGES)/frame043.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame044.s			:	../$(IMAGES)/frame044.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame045.s			:	../$(IMAGES)/frame045.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame046.s			:	../$(IMAGES)/frame046.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame047.s			:	../$(IMAGES)/frame047.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame048.s			:	../$(IMAGES)/frame048.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame049.s			:	../$(IMAGES)/frame049.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame050.s			:	../$(IMAGES)/frame050.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame051.s			:	../$(IMAGES)/frame051.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame052.s			:	../$(IMAGES)/frame052.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame053.s			:	../$(IMAGES)/frame053.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame054.s			:	../$(IMAGES)/frame054.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame055.s			:	../$(IMAGES)/frame055.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame056.s			:	../$(IMAGES)/frame056.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame057.s			:	../$(IMAGES)/frame057.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame058.s			:	../$(IMAGES)/frame058.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame059.s			:	../$(IMAGES)/frame059.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame060.s			:	../$(IMAGES)/frame060.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame061.s			:	../$(IMAGES)/frame061.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame062.s			:	../$(IMAGES)/frame062.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame063.s			:	../$(IMAGES)/frame063.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame064.s			:	../$(IMAGES)/frame064.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame065.s			:	../$(IMAGES)/frame065.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame066.s			:	../$(IMAGES)/frame066.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame067.s			:	../$(IMAGES)/frame067.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame068.s			:	../$(IMAGES)/frame068.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame069.s			:	../$(IMAGES)/frame069.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame070.s			:	../$(IMAGES)/frame070.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame071.s			:	../$(IMAGES)/frame071.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame072.s			:	../$(IMAGES)/frame072.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame073.s			:	../$(IMAGES)/frame073.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame074.s			:	../$(IMAGES)/frame074.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame075.s			:	../$(IMAGES)/frame075.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame076.s			:	../$(IMAGES)/frame076.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame077.s			:	../$(IMAGES)/frame077.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame078.s			:	../$(IMAGES)/frame078.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame079.s			:	../$(IMAGES)/frame079.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame080.s			:	../$(IMAGES)/frame080.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame081.s			:	../$(IMAGES)/frame081.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame082.s			:	../$(IMAGES)/frame082.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame083.s			:	../$(IMAGES)/frame083.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame084.s			:	../$(IMAGES)/frame084.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame085.s			:	../$(IMAGES)/frame085.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame086.s			:	../$(IMAGES)/frame086.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame087.s			:	../$(IMAGES)/frame087.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame088.s			:	../$(IMAGES)/frame088.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame089.s			:	../$(IMAGES)/frame089.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame090.s			:	../$(IMAGES)/frame090.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame091.s			:	../$(IMAGES)/frame091.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame092.s			:	../$(IMAGES)/frame092.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame093.s			:	../$(IMAGES)/frame093.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame094.s			:	../$(IMAGES)/frame094.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame095.s			:	../$(IMAGES)/frame095.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame096.s			:	../$(IMAGES)/frame096.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame097.s			:	../$(IMAGES)/frame097.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame098.s			:	../$(IMAGES)/frame098.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame099.s			:	../$(IMAGES)/frame099.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame100.s			:	../$(IMAGES)/frame100.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame101.s			:	../$(IMAGES)/frame101.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame102.s			:	../$(IMAGES)/frame102.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame103.s			:	../$(IMAGES)/frame103.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame104.s			:	../$(IMAGES)/frame104.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame105.s			:	../$(IMAGES)/frame105.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame106.s			:	../$(IMAGES)/frame106.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame107.s			:	../$(IMAGES)/frame107.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame108.s			:	../$(IMAGES)/frame108.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame109.s			:	../$(IMAGES)/frame109.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame110.s			:	../$(IMAGES)/frame110.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame111.s			:	../$(IMAGES)/frame111.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame112.s			:	../$(IMAGES)/frame112.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame113.s			:	../$(IMAGES)/frame113.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame114.s			:	../$(IMAGES)/frame114.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame115.s			:	../$(IMAGES)/frame115.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame116.s			:	../$(IMAGES)/frame116.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame117.s			:	../$(IMAGES)/frame117.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame118.s			:	../$(IMAGES)/frame118.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame119.s			:	../$(IMAGES)/frame119.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame120.s			:	../$(IMAGES)/frame120.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame121.s			:	../$(IMAGES)/frame121.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame122.s			:	../$(IMAGES)/frame122.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame123.s			:	../$(IMAGES)/frame123.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame124.s			:	../$(IMAGES)/frame124.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame125.s			:	../$(IMAGES)/frame125.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame126.s			:	../$(IMAGES)/frame126.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame127.s			:	../$(IMAGES)/frame127.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame128.s			:	../$(IMAGES)/frame128.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame129.s			:	../$(IMAGES)/frame129.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame130.s			:	../$(IMAGES)/frame130.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame131.s			:	../$(IMAGES)/frame131.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame132.s			:	../$(IMAGES)/frame132.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame133.s			:	../$(IMAGES)/frame133.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame134.s			:	../$(IMAGES)/frame134.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame135.s			:	../$(IMAGES)/frame135.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame136.s			:	../$(IMAGES)/frame136.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame137.s			:	../$(IMAGES)/frame137.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame138.s			:	../$(IMAGES)/frame138.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame139.s			:	../$(IMAGES)/frame139.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame140.s			:	../$(IMAGES)/frame140.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame141.s			:	../$(IMAGES)/frame141.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame142.s			:	../$(IMAGES)/frame142.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame143.s			:	../$(IMAGES)/frame143.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame144.s			:	../$(IMAGES)/frame144.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame145.s			:	../$(IMAGES)/frame145.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame146.s			:	../$(IMAGES)/frame146.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame147.s			:	../$(IMAGES)/frame147.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame148.s			:	../$(IMAGES)/frame148.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame149.s			:	../$(IMAGES)/frame149.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame150.s			:	../$(IMAGES)/frame150.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame151.s			:	../$(IMAGES)/frame151.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame152.s			:	../$(IMAGES)/frame152.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame153.s			:	../$(IMAGES)/frame153.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame154.s			:	../$(IMAGES)/frame154.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame155.s			:	../$(IMAGES)/frame155.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame156.s			:	../$(IMAGES)/frame156.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame157.s			:	../$(IMAGES)/frame157.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame158.s			:	../$(IMAGES)/frame158.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame159.s			:	../$(IMAGES)/frame159.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame160.s			:	../$(IMAGES)/frame160.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame161.s			:	../$(IMAGES)/frame161.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame162.s			:	../$(IMAGES)/frame162.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame163.s			:	../$(IMAGES)/frame163.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame164.s			:	../$(IMAGES)/frame164.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame165.s			:	../$(IMAGES)/frame165.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame166.s			:	../$(IMAGES)/frame166.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame167.s			:	../$(IMAGES)/frame167.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame168.s			:	../$(IMAGES)/frame168.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame169.s			:	../$(IMAGES)/frame169.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame170.s			:	../$(IMAGES)/frame170.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame171.s			:	../$(IMAGES)/frame171.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame172.s			:	../$(IMAGES)/frame172.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame173.s			:	../$(IMAGES)/frame173.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame174.s			:	../$(IMAGES)/frame174.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame175.s			:	../$(IMAGES)/frame175.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame176.s			:	../$(IMAGES)/frame176.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame177.s			:	../$(IMAGES)/frame177.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame178.s			:	../$(IMAGES)/frame178.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame179.s			:	../$(IMAGES)/frame179.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame180.s			:	../$(IMAGES)/frame180.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame181.s			:	../$(IMAGES)/frame181.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame182.s			:	../$(IMAGES)/frame182.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame183.s			:	../$(IMAGES)/frame183.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame184.s			:	../$(IMAGES)/frame184.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame185.s			:	../$(IMAGES)/frame185.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame186.s			:	../$(IMAGES)/frame186.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame187.s			:	../$(IMAGES)/frame187.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame188.s			:	../$(IMAGES)/frame188.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame189.s			:	../$(IMAGES)/frame189.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame190.s			:	../$(IMAGES)/frame190.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame191.s			:	../$(IMAGES)/frame191.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame192.s			:	../$(IMAGES)/frame192.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame193.s			:	../$(IMAGES)/frame193.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame194.s			:	../$(IMAGES)/frame194.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame195.s			:	../$(IMAGES)/frame195.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame196.s			:	../$(IMAGES)/frame196.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame197.s			:	../$(IMAGES)/frame197.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame198.s			:	../$(IMAGES)/frame198.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame199.s			:	../$(IMAGES)/frame199.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame200.s			:	../$(IMAGES)/frame200.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame201.s			:	../$(IMAGES)/frame201.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame202.s			:	../$(IMAGES)/frame202.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame203.s			:	../$(IMAGES)/frame203.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame204.s			:	../$(IMAGES)/frame204.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame205.s			:	../$(IMAGES)/frame205.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame206.s			:	../$(IMAGES)/frame206.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame207.s			:	../$(IMAGES)/frame207.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame208.s			:	../$(IMAGES)/frame208.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame209.s			:	../$(IMAGES)/frame209.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame210.s			:	../$(IMAGES)/frame210.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame211.s			:	../$(IMAGES)/frame211.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame212.s			:	../$(IMAGES)/frame212.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame213.s			:	../$(IMAGES)/frame213.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame214.s			:	../$(IMAGES)/frame214.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame215.s			:	../$(IMAGES)/frame215.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame216.s			:	../$(IMAGES)/frame216.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame217.s			:	../$(IMAGES)/frame217.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame218.s			:	../$(IMAGES)/frame218.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame219.s			:	../$(IMAGES)/frame219.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame220.s			:	../$(IMAGES)/frame220.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame221.s			:	../$(IMAGES)/frame221.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame222.s			:	../$(IMAGES)/frame222.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame223.s			:	../$(IMAGES)/frame223.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame224.s			:	../$(IMAGES)/frame224.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame225.s			:	../$(IMAGES)/frame225.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame226.s			:	../$(IMAGES)/frame226.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame227.s			:	../$(IMAGES)/frame227.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame228.s			:	../$(IMAGES)/frame228.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame229.s			:	../$(IMAGES)/frame229.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame230.s			:	../$(IMAGES)/frame230.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame231.s			:	../$(IMAGES)/frame231.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame232.s			:	../$(IMAGES)/frame232.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame233.s			:	../$(IMAGES)/frame233.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame234.s			:	../$(IMAGES)/frame234.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame235.s			:	../$(IMAGES)/frame235.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame236.s			:	../$(IMAGES)/frame236.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame237.s			:	../$(IMAGES)/frame237.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame238.s			:	../$(IMAGES)/frame238.png
	grit	$< -gB4 -pe16 -gzl -gt -m

frame239.s			:	../$(IMAGES)/frame239.png
	grit	$< -gB4 -pe16 -gzl -gt -m

#---------------------------------------------------------------------------------
# rule to build soundbank from music files
#---------------------------------------------------------------------------------
soundbank.bin : $(AUDIOFILES)
#---------------------------------------------------------------------------------
	@mmutil $^ -d -osoundbank.bin -hsoundbank.h

#---------------------------------------------------------------------------------
# you need a rule like this for each extension you use as binary data 
#---------------------------------------------------------------------------------
%.bin.o	:	%.bin
#---------------------------------------------------------------------------------
	@echo $(notdir $<)
	@$(bin2o)

-include $(DEPENDS)
 
#---------------------------------------------------------------------------------------
endif
#---------------------------------------------------------------------------------------
