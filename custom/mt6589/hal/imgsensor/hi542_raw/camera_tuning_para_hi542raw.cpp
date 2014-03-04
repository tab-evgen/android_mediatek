/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

/********************************************************************************************
 *     LEGAL DISCLAIMER
 *
 *     (Header of MediaTek Software/Firmware Release or Documentation)
 *
 *     BY OPENING OR USING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 *     THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE") RECEIVED
 *     FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON AN "AS-IS" BASIS
 *     ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, EXPRESS OR IMPLIED,
 *     INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR
 *     A PARTICULAR PURPOSE OR NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY
 *     WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 *     INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK
 *     ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
 *     NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S SPECIFICATION
 *     OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
 *
 *     BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE LIABILITY WITH
 *     RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION,
TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE
 *     FEES OR SERVICE CHARGE PAID BY BUYER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 *     THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE WITH THE LAWS
 *     OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF LAWS PRINCIPLES.
 ************************************************************************************************/
#include <utils/Log.h>
#include <fcntl.h>
#include <math.h>

#include "camera_custom_nvram.h"
#include "camera_custom_sensor.h"
#include "image_sensor.h"
#include "kd_imgsensor_define.h"
#include "camera_AE_PLineTable_hi542raw.h"
#include "camera_info_hi542raw.h"
#include "camera_custom_AEPlinetable.h"

const NVRAM_CAMERA_ISP_PARAM_STRUCT CAMERA_ISP_DEFAULT_VALUE =
{{
    //Version
    Version: NVRAM_CAMERA_PARA_FILE_VERSION,

    //SensorId
    SensorId: SENSOR_ID,
    ISPComm:{
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    	}
    },
    ISPPca: {
        #include INCLUDE_FILENAME_ISP_PCA_PARAM
    },
    ISPRegs:{
        #include INCLUDE_FILENAME_ISP_REGS_PARAM
    },
    ISPMfbMixer:{{
        {//00: MFB mixer for ISO 100
            0x00000000, 0x00000000
        },
        {//01: MFB mixer for ISO 200
            0x00000000, 0x00000000
        },
        {//02: MFB mixer for ISO 400
            0x00000000, 0x00000000
        },
        {//03: MFB mixer for ISO 800
            0x00000000, 0x00000000
        },
        {//04: MFB mixer for ISO 1600
            0x00000000, 0x00000000
        },
        {//05: MFB mixer for ISO 2400
            0x00000000, 0x00000000
        },
        {//06: MFB mixer for ISO 3200
            0x00000000, 0x00000000
    }
    }},
    ISPCcmPoly22:{
        72033,    // i4R_AVG
        11423,    // i4R_STD
        92733,    // i4B_AVG
        18791,    // i4B_STD
        {  // i4P00[9]
            5220000, -3276667, 620000, -1360000, 4593333, -673333, -223333, -2293333, 5076667
        },
        {  // i4P10[9]
            2107614, -1606190, -513305, -229561, -204397, 411212, 222692, 434694, -657385
        },
        {  // i4P01[9]
            2139575, -1677669, -470093, -396529, -257243, 632556, 170073, -127295, -42778
        },
        {  // i4P20[9]
            0, 0, 0, 0, 0, 0, 0, 0, 0
        },
        {  // i4P11[9]
            0, 0, 0, 0, 0, 0, 0, 0, 0
        },
        {  // i4P02[9]
            0, 0, 0, 0, 0, 0, 0, 0, 0
        }
    }
}};

const NVRAM_CAMERA_3A_STRUCT CAMERA_3A_NVRAM_DEFAULT_VALUE =
{
    NVRAM_CAMERA_3A_FILE_VERSION, // u4Version
    SENSOR_ID, // SensorId

    // AE NVRAM
    {
        // rDevicesInfo
        {
            1024,   // u4MinGain, 1024 base =  1x
            8192,  // u4MaxGain, 16x
            32,     // u4MiniISOGain, ISOxx
            128,    // u4GainStepUnit, 1x/8
            33,     // u4PreExpUnit
            30,     // u4PreMaxFrameRate
            33,     // u4VideoExpUnit
            30,     // u4VideoMaxFrameRate
            1024,   // u4Video2PreRatio, 1024 base = 1x
            58,     // u4CapExpUnit
            15,     // u4CapMaxFrameRate
            1024,   // u4Cap2PreRatio, 1024 base = 1x
            28,      // u4LensFno, Fno = 2.8
            3500     // u4FocusLength_100x  //fuzr1 2013-2-18 modify for bug 5337 focuslength to 35mm 350-->3500
         },
         // rHistConfig
        {
            2,   // u4HistHighThres
            40,  // u4HistLowThres
            2,   // u4MostBrightRatio
            1,   // u4MostDarkRatio
            160, // u4CentralHighBound
            20,  // u4CentralLowBound
            {240, 230, 220, 210, 200}, // u4OverExpThres[AE_CCT_STRENGTH_NUM]
            {86, 108, 128, 148, 170},  // u4HistStretchThres[AE_CCT_STRENGTH_NUM]
            {18, 22, 26, 30, 34}       // u4BlackLightThres[AE_CCT_STRENGTH_NUM]
        },
        // rCCTConfig
        {
            TRUE,            // bEnableBlackLight
            TRUE,            // bEnableHistStretch
            FALSE,           // bEnableAntiOverExposure
            TRUE,            // bEnableTimeLPF
            TRUE,            // bEnableCaptureThres
            TRUE,            // bEnableVideoThres
            TRUE,            // bEnableStrobeThres
            47,                // u4AETarget
            47,                // u4StrobeAETarget

            50,                // u4InitIndex
            4,                 // u4BackLightWeight
            32,                // u4HistStretchWeight
            4,                 // u4AntiOverExpWeight
            2,                 // u4BlackLightStrengthIndex
            2,                 // u4HistStretchStrengthIndex
            2,                 // u4AntiOverExpStrengthIndex
            2,                 // u4TimeLPFStrengthIndex
            {1, 3, 5, 7, 8}, // u4LPFConvergeTable[AE_CCT_STRENGTH_NUM]
            90,                // u4InDoorEV = 9.0, 10 base
            -10,               // i4BVOffset delta BV = -2.3
            4,                 // u4PreviewFlareOffset
            4,                 // u4CaptureFlareOffset
            5,                 // u4CaptureFlareThres
            4,                 // u4VideoFlareOffset
            5,                 // u4VideoFlareThres
            2,                 // u4StrobeFlareOffset
            2,                 // u4StrobeFlareThres
            8,                 // u4PrvMaxFlareThres
            0,                 // u4PrvMinFlareThres
            8,                 // u4VideoMaxFlareThres
            0,                 // u4VideoMinFlareThres            
            18,                // u4FlatnessThres              // 10 base for flatness condition.
            75                 // u4FlatnessStrength
         }
    },

    // AWB NVRAM
    {
    	// AWB calibration data
    	{
    		// rUnitGain (unit gain: 1.0 = 512)
    		{
    			0,	// i4R
    			0,	// i4G
    			0	// i4B
    		},
    		// rGoldenGain (golden sample gain: 1.0 = 512)
    		{
	            0,	// i4R
	            0,	// i4G
	            0	// i4B
            },
    		// rTuningUnitGain (Tuning sample unit gain: 1.0 = 512)
    		{
	            0,	// i4R
	            0,	// i4G
	            0	// i4B
            },
            // rD65Gain (D65 WB gain: 1.0 = 512)
            {
                875,    // i4R
                512,    // i4G
                702    // i4B
    		}
    	},
    	// Original XY coordinate of AWB light source
    	{
		    // Strobe
		    {
                82,    // i4X
                -314    // i4Y
		    },
    		// Horizon
    		{
                -394,    // i4X
                -356    // i4Y
            },
            // A
            {
                -288,    // i4X
                -360    // i4Y
            },
            // TL84
            {
                -177,    // i4X
                -334    // i4Y
            },
            // CWF
            {
                -132,    // i4X
                -391    // i4Y
            },
            // DNP
            {
                -37,    // i4X
                -355    // i4Y
            },
            // D65
            {
                82,    // i4X
                -314    // i4Y
    		},
		// DF
		{
                82,    // i4X
                -314    // i4Y
    		}
    	},
    	// Rotated XY coordinate of AWB light source
    	{
		    // Strobe
		    {
                49,    // i4X
                -321    // i4Y
		    },
    		// Horizon
            {
                -430,    // i4X
                -313    // i4Y
            },
            // A
            {
                -325,    // i4X
                -328    // i4Y
            },
            // TL84
            {
                -212,    // i4X
                -314    // i4Y
            },
            // CWF
            {
                -173,    // i4X
                -376    // i4Y
            },
            // DNP
            {
                -74,    // i4X
                -350    // i4Y
            },
            // D65
            {
                49,    // i4X
                -321    // i4Y
            },
		// DF
		{
                49,    // i4X
                -321    // i4Y
    		}
    	},
	// AWB gain of AWB light source
	{
		// Strobe
		{
                875,    // i4R
                512,    // i4G
                702    // i4B
		},
		// Horizon
            {
                512,    // i4R
                539,    // i4G
                1488    // i4B
            },
            // A 
            {
                565,    // i4R
                512,    // i4G
                1232    // i4B
            },
            // TL84 
            {
                634,    // i4R
                512,    // i4G
                1023    // i4B
            },
            // CWF 
            {
                727,    // i4R
                512,    // i4G
                1038    // i4B
            },
            // DNP 
            {
                787,    // i4R
                512,    // i4G
                870    // i4B
            },
            // D65 
            {
                875,    // i4R
                512,    // i4G
                702    // i4B
            },
		// DF
		{
                875,    // i4R
                512,    // i4G
                702    // i4B
		}
	},
    	// Rotation matrix parameter
    	{
            6,    // i4RotationAngle
            255,    // i4Cos
            27    // i4Sin
        },
        // Daylight locus parameter
        {
            -155,    // i4SlopeNumerator
            128    // i4SlopeDenominator
    	},
    	// AWB light area
    	{
		    // Strobe:FIXME
		    {
            0,    // i4RightBound
            0,    // i4LeftBound
            0,    // i4UpperBound
            0    // i4LowerBound
		    },
    		// Tungsten
    		{
            -262,    // i4RightBound
            -912,    // i4LeftBound
            -270,    // i4UpperBound
            -370    // i4LowerBound
            },
            // Warm fluorescent
            {
            -262,    // i4RightBound
            -912,    // i4LeftBound
            -370,    // i4UpperBound
            -490    // i4LowerBound
            },
            // Fluorescent
            {
            -124,    // i4RightBound
            -262,    // i4LeftBound
            -249,    // i4UpperBound
            -345    // i4LowerBound
            },
            // CWF
            {
            -124,    // i4RightBound
            -262,    // i4LeftBound
            -345,    // i4UpperBound
            -426    // i4LowerBound
            },
            // Daylight
            {
            74,    // i4RightBound
            -124,    // i4LeftBound
            -241,    // i4UpperBound
            -401    // i4LowerBound
            },
            // Shade
            {
            434,    // i4RightBound
            74,    // i4LeftBound
            -241,    // i4UpperBound
            -401    // i4LowerBound
		},
		// Daylight Fluorescent
		{
			0,	// i4RightBound
			0,	// i4LeftBound
			0,	// i4UpperBound
			0	// i4LowerBound
    		}
    	},
    	// PWB light area
    	{
    		// Reference area
    		{
            434,    // i4RightBound
            -912,    // i4LeftBound
            -216,    // i4UpperBound
            -490    // i4LowerBound
            },
            // Daylight
            {
            99,    // i4RightBound
            -124,    // i4LeftBound
            -241,    // i4UpperBound
            -401    // i4LowerBound
            },
            // Cloudy daylight
            {
            199,    // i4RightBound
            24,    // i4LeftBound
            -241,    // i4UpperBound
            -401    // i4LowerBound
            },
            // Shade
            {
            299,    // i4RightBound
            24,    // i4LeftBound
            -241,    // i4UpperBound
            -401    // i4LowerBound
            },
            // Twilight
            {
            -124,    // i4RightBound
            -284,    // i4LeftBound
            -241,    // i4UpperBound
            -401    // i4LowerBound
            },
            // Fluorescent
            {
            99,    // i4RightBound
            -312,    // i4LeftBound
            -264,    // i4UpperBound
            -426    // i4LowerBound
            },
            // Warm fluorescent
            {
            -225,    // i4RightBound
            -425,    // i4LeftBound
            -264,    // i4UpperBound
            -426    // i4LowerBound
            },
            // Incandescent
            {
            -225,    // i4RightBound
            -425,    // i4LeftBound
            -241,    // i4UpperBound
            -401    // i4LowerBound
    		},
            {// Gray World
            5000,    // i4RightBound
            -5000,    // i4LeftBound
            5000,    // i4UpperBound
            -5000    // i4LowerBound
		    }
    	},
    	// PWB default gain
    	{
    		// Daylight
    		{
            813,    // i4R
            512,    // i4G
            767    // i4B
            },
            // Cloudy daylight
            {
            943,    // i4R
            512,    // i4G
            638    // i4B
            },
            // Shade
            {
            1002,    // i4R
            512,    // i4G
            592    // i4B
            },
            // Twilight
            {
            646,    // i4R
            512,    // i4G
            1020    // i4B
            },
            // Fluorescent
            {
            752,    // i4R
            512,    // i4G
            908    // i4B
            },
            // Warm fluorescent
            {
            579,    // i4R
            512,    // i4G
            1256    // i4B
            },
            // Incandescent
            {
            558,    // i4R
            512,    // i4G
            1221    // i4B
		},
		// Gray World
		{
			512,	// i4R
			512,	// i4G
			512	// i4B
    		}
    	},
    	// AWB preference color
    	{
    		// Tungsten
    		{
            50,    // i4SliderValue
            4257    // i4OffsetThr
            },
            // Warm fluorescent	
            {
            50,    // i4SliderValue
            4257    // i4OffsetThr
            },
            // Shade
            {
            50,    // i4SliderValue
            842    // i4OffsetThr
            },
            // Daylight WB gain
            {
            755,    // i4R
            512,    // i4G
            841    // i4B
		},
		// Preference gain: strobe
		{
			512,	// i4R
			512,	// i4G
			512	// i4B
		},
		// Preference gain: tungsten
		{
			512,	// i4R
			512,	// i4G
			512	    // i4B
		},
		// Preference gain: warm fluorescent
		{
			512,	// i4R
			512,	// i4G
			512	    // i4B
		},
		// Preference gain: fluorescent
		{
			512,	// i4R
			512,	// i4G
			512	    // i4B
		},
		// Preference gain: CWF
		{
			512,	// i4R
			512,	// i4G
			512	    // i4B
		},
		// Preference gain: daylight
		{
			512,	// i4R
			512,	// i4G
			512	    // i4B
		},
		// Preference gain: shade
		{
			512,	// i4R
			512,	// i4G
			512	    // i4B
		},
		// Preference gain: daylight fluorescent
		{
			512,	// i4R
			512,	// i4G
			512	    // i4B
    		}
    	},
    	// CCT estimation
    	{
    		// CCT
    		{
			    2300,	// i4CCT[0]
    			2850,	// i4CCT[1]
    			4100,	// i4CCT[2]
    			5100,	// i4CCT[3]
    			6500	// i4CCT[4]
    		},
    		// Rotated X coordinate
    		{
                -479,    // i4RotatedXCoordinate[0]
                -374,    // i4RotatedXCoordinate[1]
                -261,    // i4RotatedXCoordinate[2]
                -123,    // i4RotatedXCoordinate[3]
    			0	// i4RotatedXCoordinate[4]
    		}
    	}
    },
	{0}
};

#include INCLUDE_FILENAME_ISP_LSC_PARAM
//};  //  namespace


typedef NSFeature::RAWSensorInfo<SENSOR_ID> SensorInfoSingleton_T;


namespace NSFeature {
template <>
UINT32
SensorInfoSingleton_T::
impGetDefaultData(CAMERA_DATA_TYPE_ENUM const CameraDataType, VOID*const pDataBuf, UINT32 const size) const
{
    UINT32 dataSize[CAMERA_DATA_TYPE_NUM] = {sizeof(NVRAM_CAMERA_ISP_PARAM_STRUCT),
                                             sizeof(NVRAM_CAMERA_3A_STRUCT),
                                             sizeof(NVRAM_CAMERA_SHADING_STRUCT),
                                             sizeof(NVRAM_LENS_PARA_STRUCT),
                                             sizeof(AE_PLINETABLE_T)};

    if (CameraDataType > CAMERA_DATA_AE_PLINETABLE || NULL == pDataBuf || (size < dataSize[CameraDataType]))
    {
        return 1;
    }

    switch(CameraDataType)
    {
        case CAMERA_NVRAM_DATA_ISP:
            memcpy(pDataBuf,&CAMERA_ISP_DEFAULT_VALUE,sizeof(NVRAM_CAMERA_ISP_PARAM_STRUCT));
            break;
        case CAMERA_NVRAM_DATA_3A:
            memcpy(pDataBuf,&CAMERA_3A_NVRAM_DEFAULT_VALUE,sizeof(NVRAM_CAMERA_3A_STRUCT));
            break;
        case CAMERA_NVRAM_DATA_SHADING:
            memcpy(pDataBuf,&CAMERA_SHADING_DEFAULT_VALUE,sizeof(NVRAM_CAMERA_SHADING_STRUCT));
            break;
        case CAMERA_DATA_AE_PLINETABLE:
            memcpy(pDataBuf,&g_PlineTableMapping,sizeof(AE_PLINETABLE_T));
            break;
        default:
            break;
    }
    return 0;
}};  //  NSFeature


