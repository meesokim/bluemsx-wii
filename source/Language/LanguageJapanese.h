/*****************************************************************************
** $Source: /cvsroot/bluemsx/blueMSX/Src/Language/LanguageJapanese.h,v $
**
** $Revision: 1.37 $
**
** $Date: 2006/07/07 00:20:19 $
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
#ifndef LANGUAGE_JAPANESE_H
#define LANGUAGE_JAPANESE_H

#include "LanguageStrings.h"

void langInitJapanese(LanguageStrings* ls) 
{
    //----------------------
    // Language lines
    //----------------------

    ls->langChineseSimplified   = "������(�ȑ̎�)";         // New in 2.5
    ls->langChineseTraditional  = "������(�ɑ̎�)";        // New in 2.5
    ls->langDutch               = "�I�����_��";                      // New in 2.5
    ls->langEnglish             = "�p��";                    // New in 2.5
    ls->langFinnish             = "�t�B�������h��";                    // New in 2.5
    ls->langFrench              = "�t�����X��";                     // New in 2.5
    ls->langGerman              = "�h�C�c��";                     // New in 2.5
    ls->langItalian             = "�C�^���A��";                    // New in 2.5
    ls->langJapanese            = "���{��";                   // New in 2.5
    ls->langKorean              = "�؍���";                     // New in 2.5
    ls->langPolish              = "�|�[�����h��";                     // New in 2.5
    ls->langPortuguese          = "�|���g�K����";                 // New in 2.5
    ls->langSpanish             = "�X�y�C����";                    // New in 2.5
    ls->langSwedish             = "�X�E�F�[�f����";                    // New in 2.5


    //----------------------
    // Generic lines
    //----------------------

    ls->textDevice              = "�f�o�C�X:"; 
    ls->textFilename            = "�t�@�C����:"; 
    ls->textFile                = "�t�@�C��"; 
    ls->textNone                = "�Ȃ�"; 
    ls->textUnknown             = "�s��";                            // New in 2.5


    //----------------------
    // Warning and Error lines
    //----------------------

    ls->warningTitle            = "blueMSX - �x��";
    ls->warningDiscardChanges   = "�\\���������܂����A��낵���ł���?";
    ls->warningOverwriteFile    = "���̃t�@�C���ɏ㏑�����Ă���낵���ł���:"; // New in 2.5
    ls->errorTitle              = "blueMSX - �G���[";
    ls->errorEnterFullscreen    = "�t���X�N���[�����[�h�ɂł��܂���B          \n";
    ls->errorDirectXFailed      = "DirectX �I�u�W�F�N�g���쐬�ł��܂���B          \nGDI�����Ɏg�p���܂��B\n�O���t�B�b�N�J�[�h�̐ݒ���m�F���Ă��������B";
    ls->errorNoRomInZip         = "zip�t�@�C���̒���.rom�t�@�C����������܂���B";
    ls->errorNoDskInZip         = "zip�t�@�C���̒���.dsk�t�@�C����������܂���B";
    ls->errorNoCasInZip         = "zip�t�@�C���̒���.cas�t�@�C����������܂���B";
    ls->errorNoHelp             = "blueMSX �̃w���v�t�@�C����������܂���B";
    ls->errorStartEmu           = "blueMSX �̊J�n�Ɏ��s���܂����B";
    ls->errorPortableReadonly   = "�|�[�^�u���f�o�C�X�͓Ǎ���p�ł��B";        // New in 2.5


    //----------------------
    // File related lines
    //----------------------

    ls->fileRom                 = "ROM �C���[�W"; 
    ls->fileAll                 = "�S�Ẵt�@�C��"; 
    ls->fileCpuState            = "CPU �X�e�[�g"; 
    ls->fileDisk                = "�f�B�X�N�C���[�W"; 
    ls->fileCas                 = "�e�[�v�C���[�W"; 


    //----------------------
    // Menu related lines
    //----------------------

    ls->menuNoRecentFiles       = "(�g�p�t�@�C���Ȃ�)";
    ls->menuInsert              = "�}��";
    ls->menuEject               = "���o��";

    ls->menuCartGameReader      = "�Q�[�����[�_�[�ɐڑ�";                        // New in 2.5
    ls->menuCartIde             = "IDE �J�[�g���b�W";                                // New in 2.5
    ls->menuCartBeerIde         = "Beer IDE";                               // New in 2.5
    ls->menuCartGIde            = "GIDE";                               // New in 2.5
    ls->menuCartSunriseIde      = "Sunrise IDE";                            // New in 2.5
    ls->menuCartSCC              = "SCC �J�[�g���b�W";
    ls->menuCartSCCPlus          = "SCC+ �J�[�g���b�W";
    ls->menuCartFMPac           = "FMPAC+ �J�[�g���b�W";
    ls->menuCartPac             = "PAC+ �J�[�g���b�W";
    ls->menuCartHBI55           = "Sony HBI-55 �J�[�g���b�W";
    ls->menuCartInsertSpecial   = "����J�[�g���b�W";                     // New in 2.5
    ls->menuCartMegaRam         = "���KRAM �J�[�g���b�W";                            // New in 2.5
    ls->menuCartExternalRam     = "�O��RAM �J�[�g���b�W"; 

    ls->menuDiskInsertNew       = "�V�K�f�B�X�N�C���[�W��}��";              // New in 2.5
    ls->menuDiskDirInsert       = "�f�B���N�g���}��"; 
    ls->menuDiskAutoStart       = "�}��/���o���ナ�Z�b�g";
    ls->menuCartAutoReset       = "�}��/���o���ナ�Z�b�g";

    ls->menuCasRewindAfterInsert = "�}���㊪���߂�";
    ls->menuCasUseReadOnly       = "�e�[�v��ǂݍ��ݐ�p�ɂ���";
    ls->lmenuCasSaveAs           = "�e�[�v��ʖ��ŕۑ�...";
    ls->menuCasSetPosition      = "�e�[�v�ʒu�Z�b�g";
    ls->menuCasRewind           = "�����߂�";
    
    ls->menuPrnFormfeed         = "������"; 

    ls->menuZoomNormal          = "�W���T�C�Y";
    ls->menuZoomDouble          = "2�{�T�C�Y";
    ls->menuZoomFullscreen      = "�t���X�N���[��";
    
    ls->menuPropsEmulation      = "�G�~�����[�V����";
    ls->menuPropsVideo          = "�r�f�I";
    ls->menuPropsSound          = "�T�E���h";
    ls->menuPropsControls       = "�R���g���[��";
    ls->menuPropsPerformance    = "�p�t�H�[�}���X";
    ls->menuPropsSettings        = "���̑�";
    ls->menuPropsFile           = "�t�@�C��";
    ls->menuPropsLanguage       = "����";
    ls->menuPropsPorts          = "�|�[�g";
    
    ls->menuVideoChipAutodetect = "�r�f�I�`�b�v�̎����F��";
    ls->menuVideoSource         = "�r�f�I�o��";                   // New in 2.5
    ls->menuVideoSourceDefault  = "�r�f�I�o�͂�������܂���";      // New in 2.5    
    ls->menuVideoInSource       = "�r�f�I����";                    // New in 2.5
    ls->menuVideoInBitmap       = "�r�b�g�}�b�v�t�@�C��";                        // New in 2.5

    ls->menuHelpHelp            = "�w���v�ڎ�";
    ls->menuHelpAbout           = "blueMSX�ɂ���";

    ls->menuFileCart            = "ROM�X���b�g";
    ls->menuFileDisk            = "�f�B�X�N�h���C�u";
    ls->menuFileCas             = "�J�Z�b�g�e�[�v";
    ls->menuFilePrn             = "�v�����^�["; 
    ls->menuFileLoadState       = "CPU�X�e�[�g�Ǎ�";
    ls->menuFileSaveState       = "CPU�X�e�[�g�ۑ�";
    ls->menuFileQLoadState      = "�N�C�b�N���[�h";
    ls->menuFileQSaveState      = "�N�C�b�N�Z�[�u";
    ls->menuFileCaptureAudio    = "�^��";
    ls->menuFileScreenShot      = "�X�N���[���V���b�g";
    ls->menuFileExit            = "�I��";

    ls->menuFileHarddisk        = "�n�[�h�f�B�X�N";                          // New in 2.5
    ls->menuFileHarddiskNoPesent= "�n�[�h�f�B�X�N�͖����ł�";             // New in 2.5

    ls->menuRunRun              = "���s";
    ls->menuRunPause            = "���f";
    ls->menuRunStop             = "��~";
    ls->menuRunSoftReset        = "�\\�t�g���Z�b�g";
    ls->menuRunHardReset        = "�n�[�h���Z�b�g";
    ls->menuRunCleanReset       = "�N���[�����Z�b�g";

    ls->menuToolsMachine         = "�}�V���\\���ҏW";
    ls->menuToolsShortcuts      = "�V���[�g�J�b�g�\\���ҏW";
    ls->menuToolsKeyboard       = "�L�[�{�[�h�\\���ҏW";
    ls->menuToolsMixer          = "�~�L�T�["; 
    ls->menuToolsDebugger       = "�f�o�b�K�[";               // New in 2.5
    ls->menuToolsTrainer        = "�g���[�i�[";                // New in 2.5
    ls->menuToolsTraceLogger    = "�g���[�X���K�[";           // New in 2.5

    ls->menuFile                = "�t�@�C��";
    ls->menuRun                 = "���s";
    ls->menuWindow              = "�E�B���h�E";
    ls->menuOptions             = "�I�v�V����";
    ls->menuTools                = "�c�[��";
    ls->menuHelp                = "�w���v";


    //----------------------
    // Dialog related lines
    //----------------------

    ls->dlgOK                   = "OK";
    ls->dlgOpen                  = "�J��";
    ls->dlgCancel               = "�L�����Z��";
    ls->dlgSave                 = "�ۑ�";
    ls->dlgSaveAs               = "�ʖ��ۑ�...";
    ls->dlgRun                  = "�N��";
    ls->dlgClose                = "����";

    ls->dlgLoadRom              = "blueMSX - rom�C���[�W��I��";
    ls->dlgLoadDsk              = "blueMSX - dsk�C���[�W��I��";
    ls->dlgLoadCas              = "blueMSX - cas�C���[�W��I��";
    ls->dlgLoadRomDskCas        = "blueMSX - rom, dsk, �܂���cas�C���[�W��I��";
    ls->dlgLoadRomDesc          = "�ǂݍ���rom�C���[�W:";
    ls->dlgLoadDskDesc          = "�ǂݍ���dsk�C���[�W:";
    ls->dlgLoadCasDesc          = "�ǂݍ���cas�C���[�W:";
    ls->dlgLoadRomDskCasDesc    = "�ǂݍ���rom, dsk, cas�C���[�W:";
    ls->dlgLoadState            = "CPU�X�e�[�g �ǂݍ���";
    ls->dlgSaveState            = "CPU�X�e�[�g �ۑ�";
    ls->dlgSaveCassette          = "blueMSX - �e�[�v��ۑ�";
    ls->dlgInsertRom1           = "ROM �C���[�W���X���b�g1�ɑ}��";
    ls->dlgInsertRom2           = "ROM �C���[�W���X���b�g2�ɑ}��";
    ls->dlgInsertDiskA          = "�f�B�X�N�C���[�W���h���C�uA�ɑ}��";
    ls->dlgInsertDiskB          = "�f�B�X�N�C���[�W���h���C�uB�ɑ}��";
    ls->dlgInsertHarddisk       = "�n�[�h�f�B�X�N��}��";                   // New in 2.5
    ls->dlgInsertCas            = "�J�Z�b�g�e�[�v��}��";
    ls->dlgRomType              = "ROM �^�C�v:"; 

    ls->dlgTapeTitle            = "blueMSX - �J�Z�b�g�e�[�v";
    ls->dlgTapeFrameText        = "�e�[�v�ʒu";
    ls->dlgTapeCurrentPos       = "���݈ʒu";
    ls->dlgTapeTotalTime        = "�g�[�^���^�C��";
    ls->dlgTapeSetPosText        = "�e�[�v�ʒu:";
    ls->dlgTapeCustom            = "�J�X�^���t�@�C����\\��";
    ls->dlgTabPosition           = "�ʒu";
    ls->dlgTabType               = "�^�C�v";
    ls->dlgTabFilename           = "�t�@�C����";
    ls->dlgZipReset             = "�}���ナ�Z�b�g";

    ls->dlgAboutTitle           = "blueMSX �ɂ���";

    ls->dlgLangLangText         = "blueMSX �Ŏg�p���錾���I�����Ă�������";
    ls->dlgLangLangTitle        = "blueMSX - ����";

    ls->dlgAboutAbout           = "���̃\\�t�g�ɂ���\r\n===========";
    ls->dlgAboutVersion         = "�o�[�W����:";
    ls->dlgAboutBuildNumber     = "�r���h:";
    ls->dlgAboutBuildDate       = "�r���h���t:";
    ls->dlgAboutCreat           = "����:\tDaniel Vik";
    ls->dlgAboutDevel           = "�J����\r\n=====";
    ls->dlgAboutThanks          = "�����͂������������X\r\n=============";
    ls->dlgAboutLisence         = "���C�Z���X\r\n"
                                  "======\r\n\r\n"
                                  "���̃\\�t�g�E�F�A�͌�������̂܂܂̏�ԂŔz�z������̂ł���A�����I�܂���"
                                  "�َ��I���킸��؂̕ۏ؂͂���܂���B�܂��A���̃\\�t�g�E�F�A�̎g�p�̌��ʐ�����"
                                  "�����Ȃ鑹�Q�ɂ��Ă��A��҂͐ӔC�𕉂��܂���B\r\n\r\n"
                                  "�ڂ��������ɂ��ẮAwww.bluemsx.com ���������������B";

    ls->dlgSavePreview          = "�v���r���[�\\��";
    ls->dlgSaveDate             = "�Z�[�u����:";


    //----------------------
    // Properties related lines
    //----------------------

    ls->propTitle               = "blueMSX - �ݒ�";
    ls->propEmulation           = "�G�~�����[�V����";
    ls->propVideo               = "�r�f�I";
    ls->propSound               = "�T�E���h";
    ls->propControls            = "�R���g���[��";
    ls->propPerformance         = "�p�t�H�[�}���X";
    ls->propSettings             = "���̑�";
    ls->propFile                = "�t�@�C��"; 
    ls->propPorts               = "�|�[�g";
    
    ls->propEmuGeneralGB        = " ��� ";
    ls->propEmuFamilyText       = "�}�V���\\��:";
    ls->propEmuMemoryGB         = " ������ ";
    ls->propEmuRamSizeText      = "���C��RAM:";
    ls->propEmuVramSizeText     = "VRAM:";
    ls->propEmuSpeedGB          = " �X�s�[�h ";
    ls->propEmuSpeedText        = "�X�s�[�h:";
    ls->propEmuFrontSwitchGB     = " �p�i�\\�j�b�N�X�C�b�` "; 
    ls->propEmuFrontSwitch       = " �O��[�����\\�t�g]�X�C�b�`"; 
    ls->propEmuFdcTiming        = " FDD�h���C�u�̃^�C�~���O�𖳌���";
    ls->propEmuPauseSwitch      = " �|�[�Y�X�C�b�`";
    ls->propEmuAudioSwitch       = " MSX-AUDIO �J�[�g���b�W�X�C�b�`"; 
    ls->propVideoFreqText       = "�r�f�I���g��:";
    ls->propVideoFreqAuto       = "����";
    ls->propSndOversampleText   = "�T���v�����O:";
    ls->propSndYkInGB           = " YK-01/YK-10/YK-20 �C�� ";                // New in 2.5
    ls->propSndMidiInGB         = " MIDI �C�� "; 
    ls->propSndMidiOutGB        = " MIDI �A�E�g "; 
    ls->propSndMidiChannel      = "MIDI �`�����l��:";                      // New in 2.5
    ls->propSndMidiAll          = "�S��";                                // New in 2.5

    ls->propMonMonGB            = " ���j�^�[ ";
    ls->propMonTypeText         = "���j�^�[�̎��:";
    ls->propMonEmuText          = "���j�^�[�G�~�����[�V����:";
    ls->propVideoTypeText       = "�f������:";
    ls->propWindowSizeText      = "�E�B���h�E�T�C�Y:";
    ls->propMonHorizStretch      = " ���������Ɋg��";  
    ls->propMonVertStretch       = " ���������Ɋg��";
    ls->propMonDeInterlace      = " �C���^�[���[�X����";
    ls->propBlendFrames         = " �c�����c��";           // New in 2.5
    ls->propMonBrightness       = "���邳:";
    ls->propMonContrast         = "�R���g���X�g:";
    ls->propMonSaturation       = "�ʓx:";
    ls->propMonGamma            = "�K���}:";
    ls->propMonScanlines        = " �X�L�������C��:";
    ls->propMonColorGhosting    = " RF���W�����[�^:";
    ls->propMonEffectsGB        = " �G�t�F�N�g "; 

    ls->propPerfVideoDrvGB      = " �r�f�I�h���C�o ";
    ls->propPerfVideoDispDrvText= "�f�B�X�v���C�h���C�o:";
    ls->propPerfFrameSkipText   = "�t���[���X�L�b�v:";
    ls->propPerfAudioDrvGB      = " �T�E���h�h���C�o ";
    ls->propPerfAudioDrvText    = "�T�E���h�h���C�o:";
    ls->propPerfAudioBufSzText  = "�T�E���h�o�b�t�@:";
    ls->propPerfEmuGB           = " �r�f�I�̃G�~�����[�V���� ";
    ls->propPerfSyncModeText    = "�������[�h:";
    ls->propFullscreenResText   = "�t���X�N���[���̉𑜓x:";

    ls->propSndChipEmuGB        = " �T�E���h�̃G�~�����[�V���� ";
    ls->propSndMsxMusic         = " MSX-MUSIC";
    ls->propSndMsxAudio         = " MSX-AUDIO";
    ls->propSndMoonsound         = " Moonsound";
    ls->propSndMt32ToGm         = " MT-32�̉��F��GM�����Ɋ��蓖��"; 

    ls->propPortsLptGB          = " �p�������|�[�g ";
    ls->propPortsComGB          = " �V���A���|�[�g ";
    ls->propPortsLptText        = "�|�[�g:";
    ls->propPortsCom1Text       = "�|�[�g 1:";
    ls->propPortsNone           = "�Ȃ�";
    ls->propPortsSimplCovox     = "SiMPL / Covox DAC";
    ls->propPortsFile           = "���O�t�@�C���֏o��"; 
    ls->propPortsComFile        = "���O�t�@�C���֏o��"; 
    ls->propPortsOpenLogFile    = "���O�t�@�C�����J��"; 
    ls->propPortsEmulateMsxPrn  = "�G�~�����[�g:"; 

    ls->propSetFileHistoryGB     = " �t�@�C���q�X�g�� ";
    ls->propSetFileHistorySize   = "�t�@�C���q�X�g���̌�:";
    ls->propSetFileHistoryClear  = "�q�X�g���̏���";
    ls->propFileTypes            = " blueMSX �Ŏg�p����t�@�C�� (rom, dsk, cas, sta) ���֘A�t��";
    ls->propWindowsEnvGB         = " Windows ";
    ls->propSetScreenSaver       = " blueMSX �̓��쒆�̓X�N���[���Z�[�o�𖳌��ɂ���";
    ls->propDisableWinKeys       = " Windows �L�[�y�ъ����L�[�� blueMSX �Ɋ��蓖�Ă�"; 
    ls->propPriorityBoost        = " Windows �� blueMSX �̗D��x����������";
    ls->propScreenshotPng       = " �X�N���[���V���b�g�� PNG �`���Ŏ擾����";  // New in 2.5
    ls->propClearHistory         = "�q�X�g���̏��������s���Ă�낵���ł���?"; 
    ls->propOpenRomGB           = " ROM �C���[�W "; 
    ls->propDefaultRomType      = "�f�t�H���gROM�^�C�v:"; 
    ls->propGuessRomType        = "ROM�^�C�v����������";

    ls->propSettDefSlotGB       = " �h���b�O���h���b�v "; 
    ls->propSettDefSlots        = "ROM ��}������X���b�g:"; 
    ls->propSettDefSlot         = " �X���b�g"; 
    ls->propSettDefDrives       = "�f�B�X�N��}������h���C�u:"; 
    ls->propSettDefDrive        = " �h���C�u"; 

    ls->propThemeGB             = " �e�[�} ";
    ls->propTheme               = "�e�[�}:";


    //----------------------
    // Dropdown related lines
    //----------------------

    ls->enumVideoMonColor       = "�J���[";
    ls->enumVideoMonGrey        = "���m�N��";
    ls->enumVideoMonGreen       = "�O���[��";
    ls->enumVideoMonAmber       = "�A���o�[";

    ls->enumVideoTypePAL        = "PAL";
    ls->enumVideoTypeNTSC       = "NTSC";

    ls->enumVideoEmuNone        = "�Ȃ�";
    ls->enumVideoEmuYc          = "Y/C�P�[�u�� (�N��)";
    ls->enumVideoEmuMonitor     = "���j�^�[";
    ls->enumVideoEmuYcBlur      = "Y/C�P�[�u���{�m�C�Y (�N��)";
    ls->enumVideoEmuComp        = "�R���|�W�b�g (�s�N��)";
    ls->enumVideoEmuCompBlur    = "�R���|�W�b�g�{�m�C�Y (�s�N��)";
    ls->enumVideoEmuScale2x     = "Scale 2x";
    ls->enumVideoEmuHq2x        = "Hq2x";

    ls->enumVideoSize1x         = "�W���T�C�Y - 320x200";
    ls->enumVideoSize2x         = "2�{�T�C�Y - 640x400";
    ls->enumVideoSizeFullscreen = "�t���X�N���[��";

    ls->enumVideoDrvDirectDrawHW= "DirectDraw �n�[�h�E�F�A";           // New in 2.5
    ls->enumVideoDrvDirectDraw  = "DirectDraw �\\�t�g�E�F�A";                     // New in 2.5
    ls->enumVideoDrvGDI         = "GDI";                            // New in 2.5

    ls->enumVideoFrameskip0     = "�Ȃ�";
    ls->enumVideoFrameskip1     = "1�t���[��";
    ls->enumVideoFrameskip2     = "2�t���[��";
    ls->enumVideoFrameskip3     = "3�t���[��";
    ls->enumVideoFrameskip4     = "4�t���[��";
    ls->enumVideoFrameskip5     = "5�t���[��";

    ls->enumSoundDrvNone        = "�Ȃ�";
    ls->enumSoundDrvWMM         = "WMM";
    ls->enumSoundDrvDirectX     = "DirectX";
    
    ls->enumEmuSync1ms          = "MSX�ɓ���"; 
    ls->enumEmuSyncAuto         = "�I�[�g(����)"; 
    ls->enumEmuSyncNone         = "�Ȃ�"; 
    ls->enumEmuSyncVblank       = "Windows�ɓ���"; 
    ls->enumEmuAsyncVblank      = "�񓯊�";             // New in 2.5

    ls->enumControlsJoyNone     = "�Ȃ�";
    ls->enumControlsJoyMouse    = "�}�E�X";
    ls->enumControlsJoyTetris2Dongle = "�e�g���X2 �h���O��"; 
    ls->enumControlsJoyTMagicKeyDongle = "MagicKey �h���O��";             // New in 2.5
    ls->enumControlsJoy2Button = "2�{�^�� �W���C�X�e�B�b�N";                   // New in 2.5
    ls->enumControlsJoyGunstick  = "�K���X�e�B�b�N";                         // New in 2.5
    ls->enumControlsJoyAsciiLaser="ASCII Plus-X �^�[�~�l�[�^�[���[�U�[";      // New in 2.5
    ls->enumControlsJoyColeco = "ColecoVision �W���C�X�e�B�b�N";                // New in 2.5

    ls->enumDiskMsx35Dbl9Sect    = "MSX 3.5�C���` 2DD (9�Z�N�^)";     // New in 2.5
    ls->enumDiskMsx35Dbl8Sect    = "MSX 3.5�C���` 2DD (8�Z�N�^)";     // New in 2.5
    ls->enumDiskMsx35Sgl9Sect    = "MSX 3.5�C���` 2D (9�Z�N�^)";     // New in 2.5
    ls->enumDiskMsx35Sgl8Sect    = "MSX 3.5�C���` 2D (8�Z�N�^)";     // New in 2.5
    ls->enumDiskSvi525Dbl        = "SVI-328 5.25�C���` 2DD";           // New in 2.5
    ls->enumDiskSvi525Sgl        = "SVI-328 5.25�C���` 2D";           // New in 2.5


    //----------------------
    // Configuration related lines
    //----------------------

    ls->confTitle                = "blueMSX - �}�V���\\���ҏW";
    ls->confConfigText           = "�}�V���\\��:";
    ls->confSlotLayout           = "�X���b�g";
    ls->confMemory               = "������";
    ls->confChipEmulation        = "�`�b�v";
    ls->confChipExtras          = "���̑�";

    ls->confOpenRom             = "ROM�C���[�W���J��"; 
    ls->confSaveTitle            = "blueMSX - �}�V���\\���ҏW�̏I��";
    ls->confSaveText             = "���݂̍\\���������܂����A��낵���ł���?";    
    ls->confSaveAsTitle         = "�ʖ��ŕۑ�...";
    ls->confSaveAsMachineName    = "�\\����:";
    ls->confDiscardTitle         = "blueMSX - �}�V���\\���ҏW";
    ls->confExitSaveTitle        = "blueMSX - �}�V���\\���ҏW�̏I��";
    ls->confExitSaveText         = "���݂̍\\���������܂����A��낵���ł���?";

    ls->confSlotLayoutGB         = " �X���b�g�\\�� ";
    ls->confSlotExtSlotGB        = " �O���X���b�g ";
    ls->confBoardGB             = " ��� ";
    ls->confBoardText           = "��Ճ^�C�v:";
    ls->confSlotPrimary          = "��{";
    ls->confSlotExpanded         = "�g��(4�̊g���X���b�g)";

    ls->confSlotCart             = "�J�[�g���b�W";
    ls->confSlot                = "�X���b�g"; 
    ls->confSubslot             = "�g���X���b�g"; 

    ls->confMemAdd               = "�ǉ�...";
    ls->confMemEdit              = "�ҏW...";
    ls->confMemRemove            = "�폜";
    ls->confMemSlot              = "�X���b�g";
    ls->confMemAddresss          = "�A�h���X";
    ls->confMemType              = "�^�C�v";
    ls->confMemRomImage          = "ROM �C���[�W";
    
    ls->confChipVideoGB          = " �r�f�I ";
    ls->confChipVideoChip        = "�r�f�I�`�b�v:";
    ls->confChipVideoRam         = "�r�f�I RAM:";
    ls->confChipSoundGB          = " �T�E���h ";

    ls->confCmosGB                = " CMOS "; 
    ls->confCmosEnable            = " CMOS�L��"; 
    ls->confCmosBattery           = " �����o�b�e���[�L��";

    ls->confCpuFreqGB            = " CPU ���g�� ";
    ls->confZ80FreqText          = "Z80 ���g��:";
    ls->confR800FreqText         = "R800 ���g��:";
    ls->confFdcGB                = " �t���b�s�[�f�B�X�N�R���g���[���[ ";
    ls->confCFdcNumDrivesText    = "�h���C�u�̐�:";

    ls->confEditMemTitle         = "blueMSX - �}�b�p�̕ҏW";
    ls->confEditMemGB            = " �}�b�p�̏ڍ� ";
    ls->confEditMemType          = "�^�C�v:";
    ls->confEditMemFile          = "�t�@�C��:";
    ls->confEditMemAddress       = "�A�h���X:";
    ls->confEditMemSize          = "�T�C�Y:";
    ls->confEditMemSlot          = "�X���b�g:";


    //----------------------
    // Shortcut lines
    //----------------------

    ls->shortcutKey             = "�@�\\"; 
    ls->shortcutDescription     = "�V���[�g�J�b�g"; 

    ls->shortcutSaveConfig      = "blueMSX - �\\���̕ۑ�";
    ls->shortcutOverwriteConfig = "�V���[�g�J�b�g�\\�����㏑�����Ă�낵���ł���?:";
    ls->shortcutExitConfig      = "blueMSX - �V���[�g�J�b�g�\\���ҏW�̏I��";
    ls->shortcutDiscardConfig   = "���݂̍\\���������܂����A��낵���ł���?";
    ls->shortcutSaveConfigAs    = "blueMSX - �V���[�g�J�b�g�\\����ʖ��ŕۑ�";
    ls->shortcutConfigName      = "�\\����:";
    ls->shortcutNewProfile      = "< �V�K�v���t�@�C�� >";
    ls->shortcutConfigTitle     = "blueMSX - �V���[�g�J�b�g�\\���ҏW";
    ls->shortcutAssign          = "���蓖��";
    ls->shortcutPressText       = "�V���[�g�J�b�g�L�[���͗�:";
    ls->shortcutScheme          = "�\\����:";
    ls->shortcutCartInsert1     = "�J�[�g���b�W1 �}��";
    ls->shortcutCartRemove1     = "�J�[�g���b�W1 ���o��";
    ls->shortcutCartInsert2     = "�J�[�g���b�W2 �}��";
    ls->shortcutCartRemove2     = "�J�[�g���b�W2 ���o��";
    ls->shortcutSpecialMenu1    = "�J�[�g���b�W1�̂��̑����j���[�̕\\��";
    ls->shortcutSpecialMenu2    = "�J�[�g���b�W2�̂��̑����j���[�̕\\��";
    ls->shortcutCartAutoReset   = "�J�[�g���b�W �}��/���o���ナ�Z�b�g";
    ls->shortcutDiskInsertA     = "�f�B�X�NA �}��";
    ls->shortcutDiskDirInsertA  = "�f�B���N�g�����f�B�X�NA�Ƃ��đ}��"; 
    ls->shortcutDiskRemoveA     = "�f�B�X�NA ���o��";
    ls->shortcutDiskChangeA     = "�f�B�X�NA ����ւ�(v-DRIVE)";
    ls->shortcutDiskAutoResetA  = "�f�B�X�NA �}��/���o���ナ�Z�b�g";
    ls->shortcutDiskInsertB     = "�f�B�X�NB �}��";
    ls->shortcutDiskDirInsertB  = "�f�B���N�g�����f�B�X�NB�Ƃ��đ}��";
    ls->shortcutDiskRemoveB     = "�f�B�X�NB ���o��";
    ls->shortcutCasInsert       = "�e�[�v �}��";
    ls->shortcutCasEject        = "�e�[�v ���o��";
    ls->shortcutCasAutorewind   = "�e�[�v �}���㊪���߂�";
    ls->shortcutCasReadOnly     = "�e�[�v��ǂݍ��ݐ�p�ɂ���";
    ls->shortcutCasSetPosition  = "�e�[�v�ʒu�Z�b�g";
    ls->shortcutCasRewind       = "�e�[�v�����߂�";
    ls->shortcutCasSave         = "�e�[�v�C���[�W�ۑ�";
    ls->shortcutPrnFormFeed     = "�v�����^�[������"; 
    ls->shortcutCpuStateLoad    = "CPU�X�e�[�g�ǂݍ���";
    ls->shortcutCpuStateSave    = "CPU�X�e�[�g�ۑ�";
    ls->shortcutCpuStateQload   = "�N�C�b�N���[�h";
    ls->shortcutCpuStateQsave   = "�N���b�N�Z�[�u";
    ls->shortcutAudioCapture    = "�T�E���h�^���̎��s/��~";
    ls->shortcutScreenshotOrig  = "�X�N���[���V���b�g";
    ls->shortcutScreenshotSmall = "���t�B���^�[�W���T�C�Y �X�N���[���V���b�g";
    ls->shortcutScreenshotLarge = "���t�B���^�[2�{�T�C�Y �X�N���[���V���b�g";
    ls->shortcutQuit            = "blueMSX �̏I��";
    ls->shortcutRunPause        = "�G�~�����[�V�����̎��s/���f";
    ls->shortcutStop            = "��~";
    ls->shortcutResetHard       = "�n�[�h���Z�b�g";
    ls->shortcutResetSoft       = "�\\�t�g���Z�b�g";
    ls->shortcutResetClean      = "�N���[�����Z�b�g";
    ls->shortcutSizeSmall       = "�W���T�C�Y";
    ls->shortcutSizeNormal      = "2�{�T�C�Y";
    ls->shortcutSizeFullscreen  = "�t���X�N���[��";
    ls->shortcutSizeMinimized   = "�E�B���h�E �ŏ���";
    ls->shortcutToggleFullscren = "�t���X�N���[����";
    ls->shortcutVolumeIncrease  = "�{�����[�����グ��";
    ls->shortcutVolumeDecrease  = "�{�����[����������";
    ls->shortcutVolumeMute      = "�~���[�g";
    ls->shortcutVolumeStereo    = "���m����/�X�e���I�̐؂�ւ�";
    ls->shortcutSwitchMsxAudio  = "MSX-AUDIO �J�[�g���b�W�X�C�b�`";
    ls->shortcutSwitchFront     = "�p�i�\\�j�b�N�n �O��[�����\\�t�g]�X�C�b�`";
    ls->shortcutSwitchPause     = "�p�i�\\�j�b�N�n �|�[�Y�X�C�b�`";
    ls->shortcutToggleMouseLock = "�}�E�X���b�N";
    ls->shortcutEmuSpeedMax     = "�G�~�����[�V�������s���x���ő���";
    ls->shortcutEmuSpeedToggle  = "�ő�����̗L��";
    ls->shortcutEmuSpeedNormal  = "�G�~�����[�V�������s���x��W����";
    ls->shortcutEmuSpeedInc     = "�G�~�����[�V�������x������";
    ls->shortcutEmuSpeedDec     = "�G�~�����[�V�������x�̌���";
    ls->shortcutThemeSwitch     = "�e�[�}�̐؂�ւ�";
    ls->shortcutShowEmuProp     = "�G�~�����[�V�����ݒ��ʂ̕\\��";
    ls->shortcutShowVideoProp   = "�r�f�I�ݒ��ʂ̕\\��";
    ls->shortcutShowAudioProp   = "�T�E���h�ݒ��ʂ̕\\��";
    ls->shortcutShowCtrlProp    = "�R���g���[���ݒ��ʂ̕\\��";
    ls->shortcutShowPerfProp    = "�p�t�H�[�}���X�ݒ��ʂ̕\\��";
    ls->shortcutShowSettProp    = "���̑��ݒ��ʂ̕\\��";
    ls->shortcutShowPorts       = "�|�[�g�ݒ��ʂ̕\\��";
    ls->shortcutShowLanguage    = "����_�C�A���O�̕\\��";
    ls->shortcutShowMachines    = "�}�V���\\���ҏW�̕\\��";
    ls->shortcutShowShortcuts   = "�V���[�g�J�b�g�G�f�B�^�[�̕\\��";
    ls->shortcutShowKeyboard    = "�L�[�{�[�h�\\���ҏW�̕\\��";
    ls->shortcutShowMixer       = "�~�L�T�[�̕\\��"; 
	ls->shortcutShowDebugger    = "�f�o�b�K�[�\\��";
    ls->shortcutShowTrainer     = "�g���[�i�[�\\��";
    ls->shortcutShowHelp        = "�w���v�_�C�A���O�̕\\��";
    ls->shortcutShowAbout       = "blueMSX �ɂ��Ă̕\\��";
    ls->shortcutShowFiles       = "�t�@�C���_�C�A���O��\\��";
    ls->shortcutToggleSpriteEnable = "�X�v���C�g�̕\\��/��\\��";
    ls->shortcutToggleFdcTiming = "FDD�h���C�u�̃^�C�~���O�̗L��/����";
    ls->shortcutToggleCpuTrace  = "CPU�g���[�X�̗L��/����";


    //----------------------
    // Keyboard config lines
    //----------------------
    
    ls->keyconfigSelectedKey    = "�I���L�[:";
    ls->keyconfigMappedTo       = "�ΏۃL�[:";
    ls->keyconfigMappingScheme  = "�\\����:";


    
    //----------------------
    // Rom type lines
    //----------------------

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

    ls->dbgMemVisible           = "Visible Memory";
    ls->dbgMemRamNormal         = "Normal";
    ls->dbgMemRamMapped         = "Mapped";
    ls->dbgMemVram              = "VRAM";
    ls->dbgMemYmf278            = "YMF278 Sample RAM";
    ls->dbgMemAy8950            = "AY8950 Sample RAM";
    ls->dbgMemScc               = "Memory";

    ls->dbgCallstack            = "Callstack";

    ls->dbgRegs                 = "Registers";
    ls->dbgRegsCpu              = "CPU Registers";
    ls->dbgRegsYmf262           = "YMF262 Registers";
    ls->dbgRegsYmf278           = "YMF278 Registers";
    ls->dbgRegsAy8950           = "AY8950 Registers";
    ls->dbgRegsYm2413           = "YM2413 Registers";

    ls->dbgDevRamMapper         = "RAM Mapper";
    ls->dbgDevRam               = "RAM";
    ls->dbgDevIdeBeer           = "Beer IDE";
    ls->dbgDevIdeGide           = "GIDE";
    ls->dbgDevF4Device          = "F4 Device";
    ls->dbgDevFmpac             = "FMPAC";
    ls->dbgDevFmpak             = "FMPAK";
    ls->dbgDevKanji             = "Kanji";
    ls->dbgDevKanji12           = "Kanji 12";
    ls->dbgDevKonamiKbd         = "Konami Keyboard Master";
    ls->dbgDevKorean80          = "Korean 80";
    ls->dbgDevKorean90          = "Korean 90";
    ls->dbgDevKorean128         = "Korean 128";
    ls->dbgDevMegaRam           = "Mega RAM";
    ls->dbgDevFdcMicrosol       = "Microsol FDC";
    ls->dbgDevMoonsound         = "Moonsound";
    ls->dbgDevMsxAudio          = "MSX Audio";
    ls->dbgDevMsxAudioMidi      = "MSX Audio MIDI";
    ls->dbgDevMsxMusic          = "MSX Music";
    ls->dbgDevPrinter           = "Printer";
    ls->dbgDevRs232             = "RS232";
    ls->dbgDevS1990             = "S1990";
    ls->dbgDevSfg05             = "Yamaha SFG-05";
    ls->dbgDevHbi55             = "Sony HBI-55";
    ls->dbgDevSviFdc            = "SVI FDC";
    ls->dbgDevSviPrn            = "SVI Printer";
    ls->dbgDevSvi80Col          = "SVI 80 Column";
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
    ls->dbgDevTrPause           = "TR Pause";
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