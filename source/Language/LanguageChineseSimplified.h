/*****************************************************************************
** $Source: /cvsroot/bluemsx/blueMSX/Src/Language/LanguageChineseSimplified.h,v $
**
** $Revision: 1.25 $
**
** $Date: 2006/06/30 15:59:33 $
**
** More info: http://www.bluemsx.com
**
** Copyright (C) 2003-2004 Daniel Vik
**
**  This software is provided 'as-is', without any express or implied
**  warranty.  In no event will the authors be held liable for any damages
**  arising from the use of this software.
**
**  Permission is granted to anyone to use this software for any purpose,
**  including commercial applications, and to alter it and redistribute it
**  freely, subject to the following restrictions:
**
**  1. The origin of this software must not be misrepresented; you must not
**     claim that you wrote the original software. If you use this software
**     in a product, an acknowledgment in the product documentation would be
**     appreciated but is not required.
**  2. Altered source versions must be plainly marked as such, and must not be
**     misrepresented as being the original software.
**  3. This notice may not be removed or altered from any source distribution.
**
******************************************************************************
*/
#ifndef LANGUAGE_CHINESE_SIMPLIFIED_H
#define LANGUAGE_CHINESE_SIMPLIFIED_H

#include "LanguageStrings.h"
 
void langInitChineseSimplified(LanguageStrings* ls) 
{
    //----------------------
    // Language lines
    //----------------------

    ls->langChineseSimplified   = "��������";
    ls->langChineseTraditional  = "��������";
    ls->langDutch               = "������";
    ls->langEnglish             = "Ӣ��";
    ls->langFinnish             = "������";
    ls->langFrench              = "����";
    ls->langGerman              = "����";
    ls->langItalian             = "�������";
    ls->langJapanese            = "����";
    ls->langKorean              = "������";
    ls->langPolish              = "������";
    ls->langPortuguese          = "��������";
    ls->langSpanish             = "��������";
    ls->langSwedish             = "�����";


    //----------------------
    // Generic lines
    //----------------------

    ls->textDevice              = "�豸:";
    ls->textFilename            = "�ļ���:";
    ls->textFile                = "�ļ�";
    ls->textNone                = "��";
    ls->textUnknown             = "δ֪";                            // New in 2.5


    //----------------------
    // Warning and Error lines
    //----------------------

    ls->warningTitle             = "blueMSX - ����";
    ls->warningDiscardChanges   = "Ҫ�����޸���";
    ls->warningOverwriteFile    = "Ҫ����ԭ���ļ���:"; // New in 2.5
    ls->errorTitle              = "blueMSX - ����";
    ls->errorEnterFullscreen    = "�޷�����ȫ��ģʽ��           \n";
    ls->errorDirectXFailed      = "�޷����� DirectX ����           \n��Ϊʹ��GDI��\n�����Կ����á�";
    ls->errorNoRomInZip         = "�޷��� zip ѹ�������ҵ� .rom �ļ���";
    ls->errorNoDskInZip         = "�޷��� zip ѹ�������ҵ� .dsk �ļ���";
    ls->errorNoCasInZip         = "�޷��� zip ѹ�������ҵ� .cas �ļ���";
    ls->errorNoHelp             = "�޷��ҵ� blueMSX �����ļ���";
    ls->errorStartEmu           = "�޷����� MSX ģ������";
    ls->errorPortableReadonly   = "��Я�豸Ϊֻ��";        // New in 2.5


    //----------------------
    // File related lines
    //----------------------

    ls->fileRom                 = "ROM ӳ��";
    ls->fileAll                 = "�����ļ�";
    ls->fileCpuState            = "CPU ״̬";
    ls->fileDisk                = "����ӳ��";
    ls->fileCas                 = "�Ŵ�ӳ��";


    //----------------------
    // Menu related lines
    //----------------------

    ls->menuNoRecentFiles       = "- ��������ļ� -";
    ls->menuInsert              = "����";
    ls->menuEject               = "����";
    
    ls->menuCartGameReader      = "Game Reader";                        // New in 2.5
    ls->menuCartIde             = "IDE";                                // New in 2.5
    ls->menuCartBeerIde         = "Beer";                               // New in 2.5
    ls->menuCartGIde            = "GIDE";                               // New in 2.5
    ls->menuCartSunriseIde      = "Sunrise";                            // New in 2.5
    ls->menuCartSCCPlus         = "SCC+ ����";
    ls->menuCartSCC             = "SCC ����";
    ls->menuCartFMPac           = "FM-PAC ����";
    ls->menuCartPac             = "PAC ����";
    ls->menuCartHBI55           = "Sony HBI-55 ����";
    ls->menuCartInsertSpecial   = "��������";                     // New in 2.5
    ls->menuCartMegaRam         = "MegaRAM";                            // New in 2.5
    ls->menuCartExternalRam     = "��չ�ڴ�";

    ls->menuDiskInsertNew       = "�����µ�����ӳ��";              // New in 2.5
    ls->menuDiskDirInsert       = "����Ŀ¼";
    ls->menuDiskAutoStart       = "���������";
    ls->menuCartAutoReset       = "����/�Ƴ�������";

    ls->menuCasRewindAfterInsert = "����󵹴�";
    ls->menuCasUseReadOnly       = "ʹ�ôŴ�ʱֻ��";
    ls->lmenuCasSaveAs           = "����Ϊ...";
    ls->menuCasSetPosition      = "�Ŵ�λ������";
    ls->menuCasRewind           = "����";

    ls->menuZoomNormal          = "��׼�ߴ�";
    ls->menuZoomDouble          = "�����ߴ�";
    ls->menuZoomFullscreen      = "ȫ��Ļ";
    
    ls->menuPrnFormfeed         = "��ҳ";
    
    ls->menuPropsEmulation      = "ģ��";
    ls->menuPropsVideo          = "��Ƶ";
    ls->menuPropsSound          = "����";
    ls->menuPropsControls       = "������";
    ls->menuPropsPerformance    = "����";
    ls->menuPropsSettings        = "�趨";
    ls->menuPropsFile           = "�ļ�";
    ls->menuPropsLanguage       = "����";
    ls->menuPropsPorts          = "�˿�";
    
    ls->menuVideoSource         = "��Ƶ���Դ";                   // New in 2.5
    ls->menuVideoSourceDefault  = "δ������Ƶ���Դ";      // New in 2.5
    ls->menuVideoChipAutodetect = "�Զ������ʾоƬ";
    ls->menuVideoInSource       = "��Ƶ����Դ";                    // New in 2.5
    ls->menuVideoInBitmap       = "λͼ�ļ�";                        // New in 2.5

    ls->menuHelpHelp            = "��������";
    ls->menuHelpAbout           = "���� blueMSX";

    ls->menuFileCart            = "�������";
    ls->menuFileDisk            = "����������";
    ls->menuFileCas             = "�Ŵ���";
    ls->menuFilePrn             = "��ӡ��";
    ls->menuFileLoadState       = "��ȡ CPU ״̬";
    ls->menuFileSaveState       = "���� CPU ״̬";
    ls->menuFileQLoadState      = "���ٶ�ȡ";
    ls->menuFileQSaveState      = "���ٱ���";
    ls->menuFileCaptureAudio    = "¼��";
    ls->menuFileScreenShot      = "��ͼ";
    ls->menuFileExit            = "�˳�";

    ls->menuFileHarddisk        = "Ӳ��";                          // New in 2.5
    ls->menuFileHarddiskNoPesent= "��ǰ�޿�����";             // New in 2.5

    ls->menuRunRun              = "����";
    ls->menuRunPause            = "��ͣ";
    ls->menuRunStop             = "ֹͣ";
    ls->menuRunSoftReset        = "��������";
    ls->menuRunHardReset        = "Ӳ������";
    ls->menuRunCleanReset       = "��������";

    ls->menuToolsMachine         = "�������ϱ༭";
    ls->menuToolsShortcuts      = "��ݼ��༭����";
    ls->menuToolsKeyboard       = "���̱༭����";
    ls->menuToolsMixer          = "������";
    ls->menuToolsDebugger       = "���Թ���";               // New in 2.5
    ls->menuToolsTrainer        = "���׹���";                // New in 2.5
    ls->menuToolsTraceLogger    = "׷�ټ�¼����";           // New in 2.5

    ls->menuFile                = "�ļ�";
    ls->menuRun                 = "����";
    ls->menuWindow              = "����";
    ls->menuOptions             = "ѡ��";
    ls->menuTools                = "����";
    ls->menuHelp                = "����";


    //----------------------
    // Dialog related lines
    //----------------------

    ls->dlgOK                   = "ȷ��";
    ls->dlgOpen                 = "��";
    ls->dlgCancel               = "ȡ��";
    ls->dlgSave                 = "����";
    ls->dlgSaveAs               = "����Ϊ...";
    ls->dlgRun                  = "����";
    ls->dlgClose                = "�ر�";

    ls->dlgLoadRom              = "blueMSX - ��ѡ�񿨴�ӳ��";
    ls->dlgLoadDsk              = "blueMSX - ��ѡ������ӳ��";
    ls->dlgLoadCas              = "blueMSX - ��ѡ��Ŵ�ӳ��";
    ls->dlgLoadRomDskCas        = "blueMSX - ��ѡ�񿨴������̻�Ŵ�ӳ��";
    ls->dlgLoadRomDesc          = "��ѡ��Ҫ��ȡ�Ŀ���ӳ��:";
    ls->dlgLoadDskDesc          = "��ѡ��Ҫ��ȡ������ӳ��:";
    ls->dlgLoadCasDesc          = "��ѡ��Ҫ��ȡ�ĴŴ�ӳ��:";
    ls->dlgLoadRomDskCasDesc    = "��ѡ��Ҫ��ȡ�Ŀ��������̻�Ŵ�ӳ��:";
    ls->dlgLoadState            = "��ȡ CPU ״̬";
    ls->dlgSaveState            = "���� CPU ״̬";
    ls->dlgSaveCassette          = "blueMSX - ����Ŵ�ӳ��";
    ls->dlgInsertRom1           = "���ڲ�� 1 ���� ROM ����";
    ls->dlgInsertRom2           = "���ڲ�� 2 ���� ROM ����";
    ls->dlgInsertDiskA          = "���������� A ��������ӳ��";
    ls->dlgInsertDiskB          = "���������� B ��������ӳ��";
    ls->dlgInsertHarddisk       = "�����Ӳ��";                   // New in 2.5
    ls->dlgInsertCas            = "�����Ŵ�";
    ls->dlgRomType              = "Rom ����:";

    ls->dlgTapeTitle            = "blueMSX - �Ŵ�";
    ls->dlgTapeFrameText        = "�Ŵ�λ��";
    ls->dlgTapeCurrentPos       = "��ǰλ��";
    ls->dlgTapeTotalTime        = "��ʱ��";
    ls->dlgTapeCustom            = "��ʾ�Զ����ļ�";
    ls->dlgTapeSetPosText        = "�Ŵ�λ��:";
    ls->dlgTabPosition           = "λ��";
    ls->dlgTabType               = "����";
    ls->dlgTabFilename           = "�ļ���";
    ls->dlgZipReset             = "���������";

    ls->dlgAboutTitle           = "blueMSX - ����";

    ls->dlgLangLangText         = "��ѡ�� blueMSX ��ʹ������";
    ls->dlgLangLangTitle        = "blueMSX - ����";

    ls->dlgAboutAbout           = "����\r\n====";
    ls->dlgAboutVersion         = "�汾:";
    ls->dlgAboutBuildNumber     = "����:";
    ls->dlgAboutBuildDate       = "����:";
    ls->dlgAboutCreat           = "����:	Daniel Vik";
    ls->dlgAboutDevel           = "��λЭ���Ŀ�������\r\n========";
    ls->dlgAboutThanks          = "�ر���л\r\n============";
    ls->dlgAboutLisence         = "��Ȩ\r\n"
                                  "======\r\n\r\n"
                                  "�������Ǹ���Ŀǰ״���������ģ�û���κ���ȷ��Ĭ������Ȩ�� "
                                  "���κ�����£�ʹ�ñ���������ɵĺ�������û��Լ��е��� "
                                  "���߽����е��κ����Ρ�\r\n\r\n"
                                  "�����������½: www.bluemsx.com ";

    ls->dlgSavePreview          = "��ʾԤ��";
    ls->dlgSaveDate             = "����ʱ��:";


    //----------------------
    // Properties related lines
    //----------------------

    ls->propTitle               = "blueMSX - ����";
    ls->propEmulation           = "ģ��";
    ls->propVideo               = "��Ƶ";
    ls->propSound               = "����";
    ls->propControls            = "������";
    ls->propPerformance         = "����";
    ls->propSettings             = "����";
    ls->propFile                = "�ļ�";
    ls->propPorts               = "�˿�";
    
    ls->propEmuGeneralGB        = "���� ";
    ls->propEmuFamilyText       = "MSX ����:";
    ls->propEmuMemoryGB         = "�ڴ� ";
    ls->propEmuRamSizeText      = "���ڴ�:";
    ls->propEmuVramSizeText     = "�Դ�:";
    ls->propEmuSpeedGB          = "ģ���ٶ� ";
    ls->propEmuSpeedText        = "ģ���ٶ�:";
    ls->propEmuFrontSwitchGB     = "Panasonic ���� ";
    ls->propEmuFrontSwitch       = " ǰ�˿���";
    ls->propEmuFdcTiming        = "����������������ʱ";
    ls->propEmuPauseSwitch      = " ��ͣ����";
    ls->propEmuAudioSwitch       = " MSX-AUDIO ������";
    ls->propVideoFreqText       = "��ƵƵ��:";
    ls->propVideoFreqAuto       = "�Զ�";
    ls->propSndOversampleText   = "������:";
    ls->propSndYkInGB           = "YK-01/YK-10/YK-20 In ";                // New in 2.5
    ls->propSndMidiInGB         = "MIDI ���� ";
    ls->propSndMidiOutGB        = "MIDI ��� ";
    ls->propSndMidiChannel      = "MIDI ����:";                      // New in 2.5
    ls->propSndMidiAll          = "ȫ��";                                // New in 2.5

    ls->propMonMonGB            = "��ʾ�� ";
    ls->propMonTypeText         = "��ʾ������:";
    ls->propMonEmuText          = "��ʾ��ģ��:";
    ls->propVideoTypeText       = "��Ƶ����:";
    ls->propWindowSizeText      = "���ڴ�С:";
    ls->propMonHorizStretch      = " ˮƽ����";
    ls->propMonVertStretch       = " ��ֱ����";
    ls->propMonDeInterlace      = " �߻��ʳ�������";
    ls->propBlendFrames         = " �������֡";           // New in 2.5
    ls->propMonBrightness       = "����:";
    ls->propMonContrast         = "�Աȶ�:";
    ls->propMonSaturation       = "���Ͷ�:";
    ls->propMonGamma            = "٤��ֵ:";
    ls->propMonScanlines        = " ɨ����:";
    ls->propMonColorGhosting    = " RF-������";
    ls->propMonEffectsGB        = "��Ч";

    ls->propPerfVideoDrvGB      = "��Ƶ���� ";
    ls->propPerfVideoDispDrvText= "��ʾ����:";
    ls->propPerfFrameSkipText   = "��֡:";
    ls->propPerfAudioDrvGB      = "��Ƶ���� ";
    ls->propPerfAudioDrvText    = "��������:";
    ls->propPerfAudioBufSzText  = "��������:";
    ls->propPerfEmuGB           = "ģ�� ";
    ls->propPerfSyncModeText    = "ͬ��ģʽ:";
    ls->propFullscreenResText   = "ȫ��Ļ�ֱ���:";

    ls->propSndChipEmuGB        = "����оƬģ�� ";
    ls->propSndMsxMusic         = " MSX-MUSIC";
    ls->propSndMsxAudio         = " MSX-AUDIO";
    ls->propSndMoonsound         = " Moonsound";
    ls->propSndMt32ToGm         = " ӳ�� MT-32 ����Ϊһ�� MIDI �豸";

    ls->propPortsLptGB          = "���ж˿� ";
    ls->propPortsComGB          = "���ж˿� ";
    ls->propPortsLptText        = "�˿�:";
    ls->propPortsCom1Text       = "�˿� 1:";
    ls->propPortsNone           = "��";
    ls->propPortsSimplCovox     = "SiMPL/Covox ��ģת����";
    ls->propPortsFile           = "��ӡ���ļ�";
    ls->propPortsComFile        = "���͵��ļ�";
    ls->propPortsOpenLogFile    = "�򿪼�¼�ļ�";
    ls->propPortsEmulateMsxPrn  = "ģ��:";

    ls->propSetFileHistoryGB     = "��ʷ�ļ� ";
    ls->propSetFileHistorySize   = "��ʷ�ļ�������:";
    ls->propSetFileHistoryClear  = "�����ʷ�ļ�";
    ls->propFileTypes            = " �� blueMSX �����ļ� ( .rom, .dsk, .cas, .sta)";
    ls->propWindowsEnvGB         = "Windows �����趨 "; 
    ls->propSetScreenSaver       = " blueMSX ����ʱ�ر���Ļ����";
    ls->propDisableWinKeys       = " MSX ʹ������Χ�� Windows ������Ч"; 
    ls->propPriorityBoost       = " ���� blueMSX �����ȼ�";
    ls->propScreenshotPng       = " ʹ�ñ�Я����ͼ���ʽ (.png) ����Ļ��ͼ";  // New in 2.5
    ls->propClearHistory         = "ȷ��Ҫ�����ʷ�ļ���";
    ls->propOpenRomGB           = "�� Rom �Ի��� ";
    ls->propDefaultRomType      = "Ĭ�� Rom ����:";
    ls->propGuessRomType        = "�²� Rom ����";

    ls->propSettDefSlotGB       = "�Ϸ� ";
    ls->propSettDefSlots        = "���� Rom ��:";
    ls->propSettDefSlot         = " ���";
    ls->propSettDefDrives       = "�������̵�:";
    ls->propSettDefDrive        = " ������";

    ls->propThemeGB             = "�������� ";
    ls->propTheme               = "��������:";


    //----------------------
    // Dropdown related lines
    //----------------------

    ls->enumVideoMonColor       = "��ɫ";
    ls->enumVideoMonGrey        = "�ڰ�";
    ls->enumVideoMonGreen       = "��ɫ";
    ls->enumVideoMonAmber       = "��ɫ";

    ls->enumVideoTypePAL        = "PAL";
    ls->enumVideoTypeNTSC       = "NTSC";

    ls->enumVideoEmuNone        = "��";
    ls->enumVideoEmuYc          = "Y/C �����· (����)";
    ls->enumVideoEmuMonitor     = "��ʾ��";
    ls->enumVideoEmuYcBlur      = "���� Y/C �����· (����)";
    ls->enumVideoEmuComp        = "���� (ģ��)";
    ls->enumVideoEmuCompBlur    = "���븴�� (ģ��)";
    ls->enumVideoEmuScale2x     = "2 ���ữ";
    ls->enumVideoEmuHq2x        = "Hq2x";

    ls->enumVideoSize1x         = "��׼ - 320x200";
    ls->enumVideoSize2x         = "���� - 640x400";
    ls->enumVideoSizeFullscreen = "ȫ��Ļ";

    ls->enumVideoDrvDirectDrawHW = "DirectDraw HW ����"; 
    ls->enumVideoDrvDirectDraw  = "DirectDraw";
    ls->enumVideoDrvGDI         = "GDI";

    ls->enumVideoFrameskip0     = "��";
    ls->enumVideoFrameskip1     = "1��֡";
    ls->enumVideoFrameskip2     = "2��֡";
    ls->enumVideoFrameskip3     = "3��֡";
    ls->enumVideoFrameskip4     = "4��֡";
    ls->enumVideoFrameskip5     = "5��֡";

    ls->enumSoundDrvNone        = "����";
    ls->enumSoundDrvWMM         = "WMM ����";
    ls->enumSoundDrvDirectX     = "DirectX ����";

    ls->enumEmuSync1ms          = "ͬ���� MSX ��ˢ��";
    ls->enumEmuSyncAuto         = "�Զ� (����)";
    ls->enumEmuSyncNone         = "��";
    ls->enumEmuSyncVblank       = "ͬ���� PC �Ĵ�ֱ�հ�";
    ls->enumEmuAsyncVblank      = "�첽�� PC �Ĵ�ֱ�հ�";             // New in 2.5

    ls->enumControlsJoyNone     = "��";
    ls->enumControlsJoyMouse    = "���";
    ls->enumControlsJoyTetris2Dongle = "����˹���� 2 ����ģ��";
    ls->enumControlsJoyTMagicKeyDongle = "MagicKey ����ģ��";             // New in 2.5
    ls->enumControlsJoy2Button = "2�����ݸ� ";                   // New in 2.5
    ls->enumControlsJoyGunstick  = "��ǹ���ݸ�";                         // New in 2.5
    ls->enumControlsJoyAsciiLaser="ASCII Plus-X �ս�������";      // New in 2.5
    ls->enumControlsJoyColeco = "ColecoVision ���ݸ�";                // New in 2.5

    ls->enumDiskMsx35Dbl9Sect    = "MSX 3.5 �� ˫��, 9 ������";     // New in 2.5
    ls->enumDiskMsx35Dbl8Sect    = "MSX 3.5 �� ˫��, 8 ������";     // New in 2.5
    ls->enumDiskMsx35Sgl9Sect    = "MSX 3.5 �� ����, 9 ������";     // New in 2.5
    ls->enumDiskMsx35Sgl8Sect    = "MSX 3.5 �� ����, 8 ������";     // New in 2.5
    ls->enumDiskSvi525Dbl        = "SVI-328 5.25 �� ˫��";           // New in 2.5
    ls->enumDiskSvi525Sgl        = "SVI-328 5.25 �� ����";           // New in 2.5


    //----------------------
    // Configuration related lines
    //----------------------

    ls->confTitle                = "blueMSX - �������ϱ༭����";
    ls->confConfigText           = "����";
    ls->confSlotLayout           = "�������";
    ls->confMemory               = "�ڴ�";
    ls->confChipEmulation        = "оƬģ��";
    ls->confChipExtras          = "����";

    ls->confOpenRom             = "�� ROM ӳ��";
    ls->confSaveTitle            = "blueMSX - ��������";
    ls->confSaveText             = "Ҫ����ԭ�еĻ���������:";
    ls->confSaveAsTitle         = "��������Ϊ...";
    ls->confSaveAsMachineName    = "��������:";
    ls->confDiscardTitle         = "blueMSX - ����";
    ls->confExitSaveTitle        = "blueMSX - �˳��༭����";
    ls->confExitSaveText         = "Ҫ�����Ե�ǰ�ļ����޸���";

    ls->confSlotLayoutGB         = "������� ";
    ls->confSlotExtSlotGB        = "��չ��� ";
    ls->confBoardGB             = "���� ";
    ls->confBoardText           = "��������:";
    ls->confSlotPrimary          = "��Ҫ";
    ls->confSlotExpanded         = "��չ ���ĸ��Ӳ�ۣ�";

    ls->confSlotCart             = "����";
    ls->confSlot                = "���";
    ls->confSubslot             = "�Ӳ��";

    ls->confMemAdd               = "����...";
    ls->confMemEdit              = "�༭...";
    ls->confMemRemove            = "ɾ��";
    ls->confMemSlot              = "���";
    ls->confMemAddresss          = "��ַ";
    ls->confMemType              = "����";
    ls->confMemRomImage          = "Rom ӳ��";
    
    ls->confChipVideoGB          = "��Ƶ ";
    ls->confChipVideoChip        = "��ʾоƬ:";
    ls->confChipVideoRam         = "��ʾ�ڴ�:";
    ls->confChipSoundGB          = "���� ";

    ls->confCmosGB                = "CMOS ";
    ls->confCmosEnable            = " ���� CMOS";
    ls->confCmosBattery           = " �������õ��";

    ls->confCpuFreqGB            = "CPU Ƶ�� ";
    ls->confZ80FreqText          = "Z80 Ƶ��:";
    ls->confR800FreqText         = "R800 Ƶ��:";
    ls->confFdcGB                = "���̿����� ";
    ls->confCFdcNumDrivesText    = "����������:";

    ls->confEditMemTitle         = "blueMSX - �༭ Mapper";
    ls->confEditMemGB            = "Mapper ��ϸ";
    ls->confEditMemType          = "����:";
    ls->confEditMemFile          = "�ļ�:";
    ls->confEditMemAddress       = "��ַ";
    ls->confEditMemSize          = "��С";
    ls->confEditMemSlot          = "���";


    //----------------------
    // Shortcut lines
    //----------------------

    ls->shortcutKey             = "�ȼ�";
    ls->shortcutDescription     = "��ݼ�";

    ls->shortcutSaveConfig      = "blueMSX - ��������";
    ls->shortcutOverwriteConfig = "Ҫ����ԭ�еĿ�ݼ�������:";
    ls->shortcutExitConfig      = "blueMSX - �˳���ݼ��༭����";
    ls->shortcutDiscardConfig   = "Ҫ�����Ե�ǰ�ļ����޸���";
    ls->shortcutSaveConfigAs    = "blueMSX - ��ݼ�����Ϊ...";
    ls->shortcutConfigName      = "��������:";
    ls->shortcutNewProfile      = "< �½����� >";
    ls->shortcutConfigTitle     = "blueMSX - ��ݼ������༭����";
    ls->shortcutAssign          = "����";
    ls->shortcutPressText       = "�������ݼ�:";
    ls->shortcutScheme          = "ӳ�䷽��:";
    ls->shortcutCartInsert1     = "���뿨�� 1";
    ls->shortcutCartRemove1     = "�Ƴ����� 1";
    ls->shortcutCartInsert2     = "���뿨�� 2";
    ls->shortcutCartRemove2     = "�Ƴ����� 2";
    ls->shortcutSpecialMenu1    = "Ϊ���� 1 ��ʾ�ر� Rom �˵�";
    ls->shortcutSpecialMenu2    = "Ϊ���� 2 ��ʾ�ر� Rom �˵�";
    ls->shortcutCartAutoReset   = "�������������ģ����";
    ls->shortcutDiskInsertA     = "�������� A";
    ls->shortcutDiskDirInsertA  = "����Ŀ¼��Ϊ����A";
    ls->shortcutDiskRemoveA     = "�������� A";
    ls->shortcutDiskChangeA     = "�����л����� A";
    ls->shortcutDiskAutoResetA  = "���� A ���������ģ����";
    ls->shortcutDiskInsertB     = "�������� B";
    ls->shortcutDiskDirInsertB  = "����Ŀ¼��Ϊ����B";
    ls->shortcutDiskRemoveB     = "�������� B";
    ls->shortcutCasInsert       = "����Ŵ�";
    ls->shortcutCasEject        = "�����Ŵ�";
    ls->shortcutCasAutorewind   = "�����Ŵ��Զ�����";
    ls->shortcutCasReadOnly     = "�����Ŵ�ֻ��";
    ls->shortcutCasSetPosition  = "�趨�Ŵ�λ��";
    ls->shortcutCasRewind       = "����";
    ls->shortcutCasSave         = "����Ŵ�ӳ��";
    ls->shortcutPrnFormFeed     = "��ӡ����ҳ";
    ls->shortcutCpuStateLoad    = "��ȡ CPU ״̬";
    ls->shortcutCpuStateSave    = "���� CPU ״̬";
    ls->shortcutCpuStateQload   = "���ٶ�ȡ CPU ״̬";
    ls->shortcutCpuStateQsave   = "���ٱ��� CPU ״̬";
    ls->shortcutAudioCapture    = "��ʼ/ֹͣ¼��";
    ls->shortcutScreenshotOrig  = "��Ļ��ͼ ��ԭʼ��";
    ls->shortcutScreenshotSmall = "��Ļ��ͼ ����׼��δ���ˣ�";
    ls->shortcutScreenshotLarge = "��Ļ��ͼ ��������δ���ˣ�";
    ls->shortcutQuit            = "�˳� blueMSX";
    ls->shortcutRunPause        = "����/��ͣģ��";
    ls->shortcutStop            = "ֹͣģ��";
    ls->shortcutResetHard       = "Ӳ������";
    ls->shortcutResetSoft       = "��������";
    ls->shortcutResetClean      = "��������";
    ls->shortcutSizeSmall       = "��Ϊ��׼����";
    ls->shortcutSizeNormal      = "��Ϊ��������";
    ls->shortcutSizeFullscreen  = "��Ϊȫ��Ļ";
    ls->shortcutSizeMinimized   = "��С������";
    ls->shortcutToggleFullscren = "�л�ȫ��Ļ";
    ls->shortcutVolumeIncrease  = "��������";
    ls->shortcutVolumeDecrease  = "��С����";
    ls->shortcutVolumeMute      = "����";
    ls->shortcutVolumeStereo    = "�л�������/������";
    ls->shortcutSwitchMsxAudio  = "�л� MSX-AUDIO ������";
    ls->shortcutSwitchFront     = "�л� Panasonic ǰ�˿���";
    ls->shortcutSwitchPause     = "�л���ͣ����";
    ls->shortcutToggleMouseLock = "�л��������";
    ls->shortcutEmuSpeedMax     = "�����ģ��";
    ls->shortcutEmuSpeedToggle  = "���������ģ��";
    ls->shortcutEmuSpeedNormal  = "����ģ���ٶ�";
    ls->shortcutEmuSpeedInc     = "�ӿ�ģ���ٶ�";
    ls->shortcutEmuSpeedDec     = "����ģ���ٶ�";
    ls->shortcutThemeSwitch     = "�л���������";
    ls->shortcutShowEmuProp     = "��ʾģ������";
    ls->shortcutShowVideoProp   = "��ʾ��Ƶ����";
    ls->shortcutShowAudioProp   = "��ʾ��Ƶ����";
    ls->shortcutShowCtrlProp    = "��ʾ��������";
    ls->shortcutShowPerfProp    = "��ʾ��������";
    ls->shortcutShowSettProp    = "��ʾ��������";
    ls->shortcutShowPorts       = "��ʾ�˿��趨";
    ls->shortcutShowLanguage    = "��ʾ���ԶԻ���";
    ls->shortcutShowMachines    = "��ʾ�������ϱ༭����";
    ls->shortcutShowShortcuts   = "��ʾ��ݼ��༭����";
    ls->shortcutShowKeyboard    = "��ʾ���̱༭����";
    ls->shortcutShowDebugger    = "��ʾ���Թ���";
    ls->shortcutShowTrainer     = "��ʾ�޸Ĺ���";
    ls->shortcutShowMixer       = "��ʾ������";
    ls->shortcutShowHelp        = "��ʾ�����Ի���";
    ls->shortcutShowAbout       = "��ʾ���ڶԻ���";
    ls->shortcutShowFiles       = "��ʾ�ļ��趨";
    ls->shortcutToggleSpriteEnable = "��ʾ/���ػ��";
    ls->shortcutToggleFdcTiming = "����/����������������ʱ";
    ls->shortcutToggleCpuTrace  = "����/���� CPU ׷��";


    //----------------------
    // Keyboard config lines
    //----------------------
    
    ls->keyconfigSelectedKey    = "ѡ�м�:";
    ls->keyconfigMappedTo       = "ӳ�䵽:";
    ls->keyconfigMappingScheme  = "ӳ�䷽��:";

    
    //----------------------
    // Rom type lines
    //----------------------</p>

    ls->romTypeStandard         = "Standard";
    ls->romTypeMsxdos2          = "MSXDOS 2";
    ls->romTypeKonamiScc        = "Konami SCC";
    ls->romTypeKonami           = "Konami";
    ls->romTypeAscii8           = "ASCII 8";
    ls->romTypeAscii16          = "ASCII 16";
    ls->romTypeGameMaster2      = "Game Master 2 (SRAM)";
    ls->romTypeAscii8Sram       = "ASCII 8 (SRAM)";
    ls->romTypeAscii16Sram      = "ASCII 16 (SRAM)";
    ls->romTypeRtype            = "R-Type";
    ls->romTypeCrossblaim       = "Cross Blaim";
    ls->romTypeHarryFox         = "Harry Fox";
    ls->romTypeMajutsushi       = "Konami Majutsushi";
    ls->romTypeZenima80         = "Zemina 80 in 1";
    ls->romTypeZenima90         = "Zemina 90 in 1";
    ls->romTypeZenima126        = "Zemina 126 in 1";
    ls->romTypeScc              = "SCC";
    ls->romTypeSccPlus          = "SCC+";
    ls->romTypeSnatcher         = "The Snatcher";
    ls->romTypeSdSnatcher       = "SD Snatcher";
    ls->romTypeSccMirrored      = "SCC mirrored";
    ls->romTypeSccExtended      = "SCC extended";
    ls->romTypeFmpac            = "FMPAC (SRAM)";
    ls->romTypeFmpak            = "FMPAK";
    ls->romTypeKonamiGeneric    = "Konami Generic";
    ls->romTypeSuperPierrot     = "Super Pierrot";
    ls->romTypeMirrored         = "Mirrored ROM";
    ls->romTypeNormal           = "Normal ROM";
    ls->romTypeDiskPatch        = "Normal + Disk Patch";
    ls->romTypeCasPatch         = "Normal + Cassette Patch";
    ls->romTypeTc8566afFdc      = "TC8566AF Disk Controller";
    ls->romTypeMicrosolFdc      = "Microsol Disk Controller";
    ls->romTypeNationalFdc      = "National Disk Controller";
    ls->romTypePhilipsFdc       = "Philips Disk Controller";
    ls->romTypeSvi738Fdc        = "SVI-738 Disk Controller";
    ls->romTypeMappedRam        = "Mapped RAM";
    ls->romTypeMirroredRam1k    = "1kB Mirrored RAM";
    ls->romTypeNormalRam        = "Normal RAM";
    ls->romTypeKanji            = "Kanji";
    ls->romTypeHolyQuran        = "Holy Quran";
    ls->romTypeMatsushitaSram   = "Matsushita SRAM";
    ls->romTypePanasonic16      = "Panasonic 16kB SRAM";
    ls->romTypePanasonic32      = "Panasonic 32kB SRAM";
    ls->romTypeBunsetsu         = "Bunsetsu";
    ls->romTypeJisyo            = "Jisyo";
    ls->romTypeKanji12          = "Kanji12";
    ls->romTypeNationalSram     = "National (SRAM)";
    ls->romTypeS1985            = "S1985";
    ls->romTypeS1990            = "S1990";
    ls->romTypeTurborPause      = "Turbo-R Pause";
    ls->romTypeF4deviceNormal   = "F4 Device Normal";
    ls->romTypeF4deviceInvert   = "F4 Device Inverted";
    ls->romTypeMsxMidi          = "MSX-MIDI";
    ls->romTypeTurborTimer      = "Turbo-R Timer";
    ls->romTypeKoei             = "Koei (SRAM)";
    ls->romTypeBasic            = "Basic ROM";
    ls->romTypeHalnote          = "Halnote";
    ls->romTypeLodeRunner       = "Lode Runner";
    ls->romTypeNormal4000       = "Normal 4000h";
    ls->romTypeNormalC000       = "Normal C000h";
    ls->romTypeKonamiSynth      = "Konami Synthesizer";
    ls->romTypeKonamiKbdMast    = "Konami Keyboard Master";
    ls->romTypeKonamiWordPro    = "Konami Word Pro";
    ls->romTypePac              = "PAC (SRAM)";
    ls->romTypeMegaRam          = "MegaRAM";
    ls->romTypeMegaRam128       = "128kB MegaRAM";
    ls->romTypeMegaRam256       = "256kB MegaRAM";
    ls->romTypeMegaRam512       = "512kB MegaRAM";
    ls->romTypeMegaRam768       = "768kB MegaRAM";
    ls->romTypeMegaRam2mb       = "2MB MegaRAM";
    ls->romTypeExtRam           = "External RAM";
    ls->romTypeExtRam512        = "512kB External RAM";
    ls->romTypeExtRam1mb        = "1MB External RAM";
    ls->romTypeExtRam2mb        = "2MB External RAM";
    ls->romTypeExtRam4mb        = "4MB External RAM";
    ls->romTypeMsxMusic         = "MSX Music";
    ls->romTypeMsxAudio         = "MSX Audio";
    ls->romTypeY8950            = "Y8950";
    ls->romTypeMoonsound        = "Moonsound";
    ls->romTypeSvi328Cart       = "SVI-328 Cartridge";
    ls->romTypeSvi328Fdc        = "SVI-328 Disk Controller";
    ls->romTypeSvi328Prn        = "SVI-328 Printer";
    ls->romTypeSvi328Uart       = "SVI-328 Serial Port";
    ls->romTypeSvi328col80      = "SVI-328 80 Column Card";
    ls->romTypeSvi727col80      = "SVI-727 80 Column Card";
    ls->romTypeColecoCart       = "Coleco Cartridge";
    ls->romTypeSg1000Cart       = "SG-1000 Cartridge";
    ls->romTypeTheCastle        = "The Castle";
    ls->romTypeSonyHbi55        = "Sony HBI-55";
    ls->romTypeMsxPrinter       = "MSX Printer";
    ls->romTypeTurborPcm        = "Turbo-R PCM Chip";
    ls->romTypeGameReader       = "Sunrise GameReader";
    ls->romTypeSunriseIde       = "Sunrise IDE";
    ls->romTypeBeerIde          = "Beer IDE";
    ls->romTypeGide             = "GIDE";
    ls->romTypeVmx80            = "Microsol VMX-80";
    ls->romTypeNms8280Digitiz   = "Philips NMS-8280 Digitizer";
    ls->romTypeHbiV1Digitiz     = "Sony HBI-V1 Digitizer";
    ls->romTypeFmdas            = "F&M Direct Assembler System";
    ls->romTypeSfg01            = "Yamaha SFG-01";
    ls->romTypeSfg05            = "Yamaha SFG-05";
    
    
    //----------------------
    // Debug type lines
    // Note: Only needs translation if debugger is translated
    //----------------------

    ls->dbgMemVisible           = "�ɼ��ڴ�";
    ls->dbgMemRamNormal         = "��ͨ";
    ls->dbgMemRamMapped         = "ӳ��";
    ls->dbgMemVram              = "�Դ�";
    ls->dbgMemYmf278            = "YMF278 ȡ���ڴ�";
    ls->dbgMemAy8950            = "AY8950 ȡ���ڴ�";
    ls->dbgMemScc               = "�ڴ�";

    ls->dbgCallstack            = "����ջ";

    ls->dbgRegs                 = "�Ĵ���";
    ls->dbgRegsCpu              = "CPU �Ĵ���";
    ls->dbgRegsYmf262           = "YMF262 �Ĵ���";
    ls->dbgRegsYmf278           = "YMF278 �Ĵ���";
    ls->dbgRegsAy8950           = "AY8950 �Ĵ���";
    ls->dbgRegsYm2413           = "YM2413 �Ĵ���";

    ls->dbgDevRamMapper         = "�ڴ�ӳ��";
    ls->dbgDevRam               = "�ڴ�";
    ls->dbgDevIdeBeer           = "Beer IDE";
    ls->dbgDevIdeGide           = "GIDE";
    ls->dbgDevF4Device          = "F4 �豸";
    ls->dbgDevFmpac             = "FMPAC";
    ls->dbgDevFmpak             = "FMPAK";
    ls->dbgDevKanji             = "Kanji";
    ls->dbgDevKanji12           = "Kanji 12";
    ls->dbgDevKonamiKbd         = "Konami ���̴�ʦ";
    ls->dbgDevKorean80          = "Korean 80";
    ls->dbgDevKorean90          = "Korean 90";
    ls->dbgDevKorean128         = "Korean 128";
    ls->dbgDevMegaRam           = "MegaRAM";
    ls->dbgDevFdcMicrosol       = "Microsol FDC";
    ls->dbgDevMoonsound         = "Moonsound";
    ls->dbgDevMsxAudio          = "MSX ��Ƶ";
    ls->dbgDevMsxAudioMidi      = "MSX ��Ƶ MIDI";
    ls->dbgDevMsxMusic          = "MSX ����";
    ls->dbgDevPrinter           = "��ӡ��";
    ls->dbgDevRs232             = "RS232";
    ls->dbgDevS1990             = "S1990";
    ls->dbgDevSfg05             = "Yamaha SFG-05";
    ls->dbgDevHbi55             = "Sony HBI-55";
    ls->dbgDevSviFdc            = "SVI FDC";
    ls->dbgDevSviPrn            = "SVI ��ӡ��";
    ls->dbgDevSvi80Col          = "SVI 80 ��";
    ls->dbgDevPcm               = "PCM";
    ls->dbgDevMatsushita        = "Matsushita";
    ls->dbgDevS1985             = "S1985";
    ls->dbgDevCrtc6845          = "CRTC6845";
    ls->dbgDevTms9929A          = "TMS9929A";
    ls->dbgDevTms99x8A          = "TMS99x8A";
    ls->dbgDevV9938             = "V9938";
    ls->dbgDevV9958             = "V9958";
    ls->dbgDevZ80               = "Z80";
    ls->dbgDevMsxMidi           = "MSX MIDI";
    ls->dbgDevPpi               = "PPI";
    ls->dbgDevRtc               = "RTC";
    ls->dbgDevTrPause           = "TR ��ͣ";
    ls->dbgDevAy8910            = "AY8910 PSG";
    ls->dbgDevScc               = "SCC";


    //----------------------
    // Debug type lines
    // Note: Can only be translated to european languages
    //----------------------

    ls->aboutScrollThanksTo     = "Special thanks to: ";
    ls->aboutScrollAndYou       = "and YOU !!!!";
};

#endif