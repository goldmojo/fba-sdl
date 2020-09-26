/*
 * FinalBurn Alpha for Dingux/OpenDingux
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef _GUI_MAIN_H_
#define _GUI_MAIN_H_

#define START_X	8
#define START_Y	129

#define LINES_COUNT 12
#define LINES_COUNT_HALF 6
#define LINE_HEIGHT 9

#define BLANC		0
#define ROUGE		9
#define ORANGE		18
#define JAUNE		27
#define VERT		36
#define BLEU		45

#define OPTIONS_FOR_GCW0
#ifndef OPTIONS_FOR_GCW0
  #define OPTIONS_FOR_A320
#endif

#define OPTION_FBA_RUN			1
#define OPTION_FBA_SOUND		2
#define OPTION_FBA_SAMPLERATE		3
#define OPTION_FBA_ROTATE		4
#define OPTION_FBA_HWSCALING		5
#define OPTION_FBA_VSYNC		6
#define OPTION_FBA_SHOWFPS		7
#define OPTION_FBA_68K			8
#define OPTION_FBA_Z80			9
#define OPTION_FBA_ANALOG		10
#define OPTION_FBA_FAVORITE		11

#define OPTION_FBA_FIRST		OPTION_FBA_RUN
#define OPTION_FBA_LAST			OPTION_FBA_FAVORITE

#define OPTION_GUI_DELAYSPEED		0
#define OPTION_GUI_REPEATSPEED	1
#define OPTION_GUI_FILTER			2
#define OPTION_GUI_ROM_PATHS		3
#define OPTION_GUI_DEFAULTS		4
#define OPTION_GUI_SHADOW			5
#define OPTION_GUI_SKIN			6
#define OPTION_GUI_ROMLIST_CACHE_CLEAR	7
#define OPTION_GUI_FAV_CLEAR		8
#define OPTION_GUI_RETURN			9

#define OPTION_MAIN_FIRST		OPTION_GUI_DELAYSPEED
#define OPTION_MAIN_LAST		OPTION_GUI_RETURN

#define OPTION_GUI_FILTER_LIST		100
#define OPTION_GUI_FILTER_HARDWARE	101
#define OPTION_GUI_FILTER_GENRE		102
#define OPTION_GUI_FILTER_CLONE		103
#define OPTION_GUI_FILTER_RETURN	104

#define OPTION_FILTER_FIRST		OPTION_GUI_FILTER_LIST
#define OPTION_FILTER_LAST		OPTION_GUI_FILTER_RETURN

#define OPTION_GUI_PATH0		200
#define OPTION_GUI_PATH1		201
#define OPTION_GUI_PATH2		202
#define OPTION_GUI_PATH3		203
#define OPTION_GUI_PATH4		204
#define OPTION_GUI_PATH5		205
#define OPTION_GUI_PATH6		206
#define OPTION_GUI_PATH7		207
#define OPTION_GUI_PATH8		208
#define OPTION_GUI_PATH9		209
#define OPTION_GUI_PATH10		210
#define OPTION_GUI_PATH11		211
#define OPTION_GUI_PATH12		212
#define OPTION_GUI_PATH13		213
#define OPTION_GUI_PATH14		214
#define OPTION_GUI_PATH15		215
#define OPTION_GUI_PATH16		216
#define OPTION_GUI_PATH17		217
#define OPTION_GUI_PATH18		218
#define OPTION_GUI_PATH19		219
#define OPTION_GUI_PATH_RETURN		220

#define OPTION_PATHS_FIRST		OPTION_GUI_PATH0
#define OPTION_PATHS_LAST		OPTION_GUI_PATH_RETURN

#define OPTION_GUI_DEF_KEYS			300
#define OPTION_GUI_DEF_AUTOFIRE		301
#define OPTION_GUI_DEF_RUN			302
#define OPTION_GUI_DEF_VKEYS			303
#define OPTION_GUI_DEF_VAUTOFIRE		304
#define OPTION_GUI_DEF_VRUN			305
#define OPTION_GUI_DEF_RESET			306
#define OPTION_GUI_DEF_DELETE			307
#define OPTION_GUI_DEF_RETURN			308

#define OPTION_DEF_FIRST		OPTION_GUI_DEF_KEYS
#define OPTION_DEF_LAST			OPTION_GUI_DEF_RETURN

#define OPTION_GUI_DEF_KEY1		400
#define OPTION_GUI_DEF_KEY2		401
#define OPTION_GUI_DEF_KEY3		402
#define OPTION_GUI_DEF_KEY4		403
#define OPTION_GUI_DEF_KEY5		404
#define OPTION_GUI_DEF_KEY6		405
#define OPTION_GUI_DEF_KEY_RETURN	406

#define OPTION_DEF_KEY_FIRST		OPTION_GUI_DEF_KEY1
#define OPTION_DEF_KEY_LAST		OPTION_GUI_DEF_KEY_RETURN

#define OPTION_GUI_DEF_AF_FPS1		500
#define OPTION_GUI_DEF_AF_KEY1		501
#define OPTION_GUI_DEF_AF_FPS2		502
#define OPTION_GUI_DEF_AF_KEY2		503
#define OPTION_GUI_DEF_AF_FPS3		504
#define OPTION_GUI_DEF_AF_KEY3		505
#define OPTION_GUI_DEF_AF_FPS4		506
#define OPTION_GUI_DEF_AF_KEY4		507
#define OPTION_GUI_DEF_AF_FPS5		508
#define OPTION_GUI_DEF_AF_KEY5		509
#define OPTION_GUI_DEF_AF_FPS6		510
#define OPTION_GUI_DEF_AF_KEY6		511
#define OPTION_GUI_DEF_AF_RETURN	512

#define OPTION_DEF_AF_FIRST		OPTION_GUI_DEF_AF_FPS1
#define OPTION_DEF_AF_LAST		OPTION_GUI_DEF_AF_RETURN

#define OPTION_GUI_DEF_RUN_SOUND		600
#define OPTION_GUI_DEF_RUN_SAMPLERATE	601
#define OPTION_GUI_DEF_RUN_HWSCALING	602
#define OPTION_GUI_DEF_RUN_VSYNC		603
#define OPTION_GUI_DEF_RUN_SHOWFPS	604
#define OPTION_GUI_DEF_RUN_CORE		605
#define OPTION_GUI_DEF_RUN_ANALOG	606
#define OPTION_GUI_DEF_RUN_RETURN	607

#define OPTION_DEF_RUN_FIRST		OPTION_GUI_DEF_RUN_SOUND
#define OPTION_DEF_RUN_LAST		OPTION_GUI_DEF_RUN_RETURN

#define OPTION_GUI_DEF_VRUN_SOUND		900
#define OPTION_GUI_DEF_VRUN_SAMPLERATE	901
#define OPTION_GUI_DEF_VRUN_ROTATE		902
#define OPTION_GUI_DEF_VRUN_HWSCALING	903
#define OPTION_GUI_DEF_VRUN_VSYNC		904
#define OPTION_GUI_DEF_VRUN_SHOWFPS		905
#define OPTION_GUI_DEF_VRUN_CORE		906
#define OPTION_GUI_DEF_VRUN_ANALOG		907
#define OPTION_GUI_DEF_VRUN_RETURN		908

#define OPTION_DEF_VRUN_FIRST		OPTION_GUI_DEF_VRUN_SOUND
#define OPTION_DEF_VRUN_LAST		OPTION_GUI_DEF_VRUN_RETURN

#define OPTIONS_START_X	8
#define OPTIONS_LINE_COUNT		12

#define OPTION_GUI_DEF_VKEY1		700
#define OPTION_GUI_DEF_VKEY2		701
#define OPTION_GUI_DEF_VKEY3		702
#define OPTION_GUI_DEF_VKEY4		703
#define OPTION_GUI_DEF_VKEY5		704
#define OPTION_GUI_DEF_VKEY6		705
#define OPTION_GUI_DEF_VKEY_RETURN	706

#define OPTION_DEF_VKEY_FIRST		OPTION_GUI_DEF_VKEY1
#define OPTION_DEF_VKEY_LAST		OPTION_GUI_DEF_VKEY_RETURN

#define OPTION_GUI_DEF_VAF_FPS1		800
#define OPTION_GUI_DEF_VAF_KEY1		801
#define OPTION_GUI_DEF_VAF_FPS2		802
#define OPTION_GUI_DEF_VAF_KEY2		803
#define OPTION_GUI_DEF_VAF_FPS3		804
#define OPTION_GUI_DEF_VAF_KEY3		805
#define OPTION_GUI_DEF_VAF_FPS4		806
#define OPTION_GUI_DEF_VAF_KEY4		807
#define OPTION_GUI_DEF_VAF_FPS5		808
#define OPTION_GUI_DEF_VAF_KEY5		809
#define OPTION_GUI_DEF_VAF_FPS6		810
#define OPTION_GUI_DEF_VAF_KEY6		811
#define OPTION_GUI_DEF_VAF_RETURN	812

#define OPTION_DEF_VAF_FIRST		OPTION_GUI_DEF_VAF_FPS1
#define OPTION_DEF_VAF_LAST		OPTION_GUI_DEF_VAF_RETURN

void GuiRun();

#endif // _GUI_MAIN_H_