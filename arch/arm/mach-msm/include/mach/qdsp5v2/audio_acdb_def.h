/* Copyright (c) 2010 - 2011, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#ifndef _MACH_QDSP5_V2_AUDIO_ACDB_DEF_H
#define _MACH_QDSP5_V2_AUDIO_ACDB_DEF_H

/* Define ACDB device ID */
#define ACDB_ID_HANDSET_SPKR				1
#define ACDB_ID_HANDSET_MIC				2
#define ACDB_ID_HEADSET_MIC				3
#define ACDB_ID_HEADSET_SPKR_MONO			4
#define ACDB_ID_HEADSET_SPKR_STEREO			5
#define ACDB_ID_SPKR_PHONE_MIC				6
#define ACDB_ID_SPKR_PHONE_MONO				7
#define ACDB_ID_SPKR_PHONE_STEREO			8
#define ACDB_ID_BT_SCO_MIC				9
#define ACDB_ID_BT_SCO_SPKR				0x0A
#define ACDB_ID_BT_A2DP_SPKR				0x0B
#define ACDB_ID_BT_A2DP_TX				0x10
#define ACDB_ID_TTY_HEADSET_MIC				0x0C
#define ACDB_ID_TTY_HEADSET_SPKR			0x0D
#define ACDB_ID_HEADSET_MONO_PLUS_SPKR_MONO_RX		0x11
#define ACDB_ID_HEADSET_STEREO_PLUS_SPKR_STEREO_RX	0x14
#define ACDB_ID_FM_TX_LOOPBACK				0x17
#define ACDB_ID_FM_TX					0x18
#define ACDB_ID_LP_FM_SPKR_PHONE_STEREO_RX		0x19
#define ACDB_ID_LP_FM_HEADSET_SPKR_STEREO_RX		0x1A
#define ACDB_ID_I2S_RX					0x20
#define ACDB_ID_SPKR_PHONE_MIC_BROADSIDE		0x2B
#define ACDB_ID_HANDSET_MIC_BROADSIDE			0x2C
#define ACDB_ID_SPKR_PHONE_MIC_ENDFIRE			0x2D
#define ACDB_ID_HANDSET_MIC_ENDFIRE			0x2E
#define ACDB_ID_I2S_TX					0x30
#define ACDB_ID_HDMI					0x40
#define ACDB_ID_FM_RX					0x4F
#if defined(CONFIG_MACH_SEMC)
#define ACDB_ID_HANDSET_SPKR_HAC			0x101
#define ACDB_ID_HEADPHONE_MIC				0x103
#define ACDB_ID_SPKR_PHONE_RINGTONE_MONO		0x107
#define ACDB_ID_SPKR_PHONE_RINGTONE_STEREO		0x108
#define ACDB_ID_BT_SCO_HFP_MIC				0x109
#define ACDB_ID_BT_SCO_HFP_SPKR				0x10A
#define ACDB_ID_BT_DSP_SCO_MIC				0x119
#define ACDB_ID_BT_DSP_SCO_SPKR				0x11A
#define ACDB_ID_HEADPHONE_MIC_ENDFIRE			0x12E
/*Replace the max device ID,if any new device is added Specific to RTC only*/
#define ACDB_ID_MAX                                 ACDB_ID_HEADPHONE_MIC_ENDFIRE
#else
#define ACDB_ID_SPKR_PHONE_MUSIC_MONO			0xF0
/*Replace the max device ID,if any new device is added Specific to RTC only*/
#define ACDB_ID_MAX                                ACDB_ID_SPKR_PHONE_MUSIC_MONO
#endif

/* ID used for virtual devices */
#define PSEUDO_ACDB_ID 					0xFFFF

/* Samsung msm7x30 device */
#define ACDB_ID_HANDSET_RX				1000
#define ACDB_ID_HANDSET_TX				1001
#define ACDB_ID_SPEAKER_RX				1002
#define ACDB_ID_SPEAKER_TX				1003
#define ACDB_ID_HEADSET_RX				1004
#define ACDB_ID_HEADSET_TX				1005
#define ACDB_ID_BT_SCO_RX				1006
#define ACDB_ID_BT_SCO_TX				1007
#define ACDB_ID_BT_SCO_NREC_RX				1008
#define ACDB_ID_BT_SCO_NREC_TX				1009
#define ACDB_ID_HDMI_STEREO_RX				1030
#define ACDB_ID_AUX_DOCK_RX				1031
#define ACDB_ID_SPEAKER_HEADSET_RX			1032
#define ACDB_ID_SPEAKER_DOCK_RX				1033
#define ACDB_ID_SPEAKER_HDMI_RX				1034
#define ACDB_ID_HANDSET_CALL_RX				1050
#define ACDB_ID_HANDSET_CALL_TX				1051
#define ACDB_ID_SPEAKER_CALL_RX				1052
#define ACDB_ID_SPEAKER_CALL_TX				1053
#define ACDB_ID_HEADSET_CALL_RX				1054
#define ACDB_ID_HEADSET_CALL_TX				1055
#define ACDB_ID_BT_SCO_CALL_RX				1056
#define ACDB_ID_BT_SCO_CALL_TX				1057
#define ACDB_ID_BT_SCO_NREC_CALL_RX			1058
#define ACDB_ID_BT_SCO_NREC_CALL_TX			1059
#define ACDB_ID_TTY_HEADSET_MONO_CALL_RX		1078
#define ACDB_ID_TTY_HEADSET_MONO_CALL_TX		1079
#define ACDB_ID_DUALMIC_HANDSET_CALL_TX			1099
#define ACDB_ID_HANDSET_FMRADIO_RX			1100
#define ACDB_ID_HEADSET_FMRADIO_RX			1102
#define ACDB_ID_HEADSET_FMRADIO_TX			1103
#define ACDB_ID_SPEAKER_FMRADIO_RX			1104
#define ACDB_ID_SPEAKER_VOICE_DIALER_TX			1110
#define ACDB_ID_HEADSET_VOICE_DIALER_TX			1111
#define ACDB_ID_BT_SCO_VOICE_DIALER_TX			1112
#define ACDB_ID_BT_SCO_NREC_VOICE_DIALER_TX		1113
#define ACDB_ID_SPEAKER_VOICE_SEARCH_TX			1115
#define ACDB_ID_HEADSET_VOICE_SEARCH_TX			1116
#define ACDB_ID_HEADSET_FMRADIO_ONLY_RX			1117
#define ACDB_ID_SPEAKER_FMRADIO_ONLY_RX			1118

/* VOIP call path */
#define ACDB_ID_HANDSET_VOIP_RX				1123
#define ACDB_ID_HANDSET_VOIP_TX				1124
#define ACDB_ID_SPEAKER_VOIP_RX				1125
#define ACDB_ID_SPEAKER_VOIP_TX				1126
#define ACDB_ID_HEADSET_VOIP_RX				1127
#define ACDB_ID_HEADSET_VOIP_TX				1128
#define ACDB_ID_BT_SCO_VOIP_RX				1129
#define ACDB_ID_BT_SCO_VOIP_TX				1130

#endif /* _MACH_QDSP5_V2_AUDIO_ACDB_DEF_H */
