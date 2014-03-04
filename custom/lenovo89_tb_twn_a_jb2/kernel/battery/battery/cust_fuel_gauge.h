#include <mach/mt_typedefs.h>

#define TEMPERATURE_T0                  110
#define TEMPERATURE_T1                  0
#define TEMPERATURE_T2                  25
#define TEMPERATURE_T3                  50
#define TEMPERATURE_T                   255 // This should be fixed, never change the value

#define FG_METER_RESISTANCE 	0

#define MAX_BOOTING_TIME_FGCURRENT	1*10 // 10s

#if defined(CONFIG_POWER_EXT)
#define OCV_BOARD_COMPESATE	72 //mV 
#define R_FG_BOARD_BASE		1000
#define R_FG_BOARD_SLOPE	1000 //slope
#else
#define OCV_BOARD_COMPESATE	0 //mV 
#define R_FG_BOARD_BASE		1000
#define R_FG_BOARD_SLOPE	1000 //slope
#endif

#define Q_MAX_POS_50_BAT1	3692
#define Q_MAX_POS_25_BAT1	3688
#define Q_MAX_POS_0_BAT1	3573
#define Q_MAX_NEG_10_BAT1	2888

#define Q_MAX_POS_50_H_CURRENT_BAT1	3672
#define Q_MAX_POS_25_H_CURRENT_BAT1	3661
#define Q_MAX_POS_0_H_CURRENT_BAT1	3573
#define Q_MAX_NEG_10_H_CURRENT_BAT1	2888

#define Q_MAX_POS_50_BAT2	3622
#define Q_MAX_POS_25_BAT2	3606
#define Q_MAX_POS_0_BAT2	3200
#define Q_MAX_NEG_10_BAT2	2248

#define Q_MAX_POS_50_H_CURRENT_BAT2	3597
#define Q_MAX_POS_25_H_CURRENT_BAT2	3534
#define Q_MAX_POS_0_H_CURRENT_BAT2	3200
#define Q_MAX_NEG_10_H_CURRENT_BAT2	2248

#define Q_MAX_POS_50_BAT3	3731
#define Q_MAX_POS_25_BAT3	3696
#define Q_MAX_POS_0_BAT3	3435
#define Q_MAX_NEG_10_BAT3	2300

#define Q_MAX_POS_50_H_CURRENT_BAT3	3705
#define Q_MAX_POS_25_H_CURRENT_BAT3	3645
#define Q_MAX_POS_0_H_CURRENT_BAT3	3435
#define Q_MAX_NEG_10_H_CURRENT_BAT3	2300

#define R_FG_VALUE 				20 // mOhm, base is 20, (20/CAR_TUNE_VALUE)*100
#define CURRENT_DETECT_R_FG	100  //10mA

#define OSR_SELECT_7			0

#define CAR_TUNE_VALUE			96 //0.96

/////////////////////////////////////////////////////////////////////
// <DOD, Battery_Voltage> Table
/////////////////////////////////////////////////////////////////////
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

//BAT1 DOD0 profile
// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0_bat1[] =
{
    {0  ,	4186 },
    {2  ,	4167 },
    {3  ,	4142 },
    {5  ,	4109 },
    {7  ,	4082 },
    {9  ,	4062 },
    {10 ,	4045 },
    {12 ,	4029 },
    {14 ,	4015 },
    {16 ,	4002 },
    {17 ,	3990 },
    {19 ,	3979 },
    {21 ,	3968 },
    {23 ,	3958 },
    {24 ,	3948 },
    {26 ,	3937 },
    {28 ,	3926 },
    {29 ,	3915 },
    {31 ,	3904 },
    {33 ,	3893 },
    {35 ,	3883 },
    {36 ,	3874 },
    {38 ,	3865 },
    {40 ,	3857 },
    {42 ,	3850 },
    {43 ,	3843 },
    {45 ,	3837 },
    {47 ,	3831 },
    {48 ,	3825 },
    {50 ,	3820 },
    {52 ,	3815 },
    {54 ,	3810 },
    {55 ,	3805 },
    {57 ,	3800 },
    {59 ,	3796 },
    {61 ,	3792 },
    {62 ,	3788 },
    {64 ,	3784 },
    {66 ,	3780 },
    {68 ,	3776 },
    {69 ,	3773 },
    {71 ,	3769 },
    {73 ,	3765 },
    {74 ,	3761 },
    {76 ,	3756 },
    {78 ,	3750 },
    {80 ,	3745 },
    {81 ,	3738 },
    {83 ,	3731 },
    {85 ,	3723 },
    {87 ,	3715 },
    {88 ,	3707 },
    {90 ,	3702 },
    {92 ,	3696 },
    {93 ,	3689 },
    {95 ,	3675 },
    {97 ,	3644 },
    {99 ,	3588 },
    {100,	3528 },
    {100,	3528 },
    {100,	3528 },
    {100,	3528 },
    {100,	3528 },
    {100,	3528 },
    {100,	3528 },
    {100,	3528 },
    {100,	3528 },
    {100,	3528 },
    {100,	3528 },
    {100,	3528 },
    {100,	3528 },
    {100,	3528 },
    {100,	3528 },
    {100,	3528 },
    {100,	3528 },
    {100,	3528 }
};

// T1 0C
BATTERY_PROFILE_STRUC battery_profile_t1_bat1[] =
{
    {0 	,	4181 },
    {1 	,	4154 },
    {3 	,	4135 },
    {4 	,	4120 },
    {6 	,	4105 },
    {7 	,	4093 },
    {8 	,	4081 },
    {10 ,	4069 },
    {11 ,	4056 },
    {13 ,	4043 },
    {14 ,	4031 },
    {15 ,	4018 },
    {17 ,	4007 },
    {18 ,	3996 },
    {20 ,	3987 },
    {21 ,	3978 },
    {22 ,	3969 },
    {24 ,	3961 },
    {25 ,	3953 },
    {27 ,	3944 },
    {28 ,	3936 },
    {29 ,	3928 },
    {31 ,	3919 },
    {32 ,	3911 },
    {34 ,	3901 },
    {35 ,	3892 },
    {36 ,	3881 },
    {38 ,	3870 },
    {39 ,	3860 },
    {41 ,	3850 },
    {42 ,	3842 },
    {43 ,	3834 },
    {45 ,	3828 },
    {46 ,	3822 },
    {48 ,	3817 },
    {49 ,	3812 },
    {50 ,	3807 },
    {52 ,	3803 },
    {53 ,	3800 },
    {55 ,	3796 },
    {56 ,	3793 },
    {57 ,	3790 },
    {59 ,	3787 },
    {60 ,	3785 },
    {62 ,	3783 },
    {63 ,	3781 },
    {64 ,	3779 },
    {66 ,	3778 },
    {67 ,	3776 },
    {69 ,	3774 },
    {70 ,	3772 },
    {71 ,	3769 },
    {73 ,	3766 },
    {74 ,	3762 },
    {76 ,	3758 },
    {77 ,	3754 },
    {78 ,	3750 },
    {80 ,	3745 },
    {81 ,	3739 },
    {83 ,	3733 },
    {84 ,	3726 },
    {85 ,	3720 },
    {87 ,	3711 },
    {88 ,	3700 },
    {90 ,	3692 },
    {91 ,	3688 },
    {92 ,	3682 },
    {94 ,	3676 },
    {95 ,	3661 },
    {97 ,	3619 },
    {98 ,	3552 },
    {99 ,	3457 },
    {100,	3407 },
    {100,	3407 },
    {100,	3407 },
    {100,	3407 }
};

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2_bat1[] =
{
    {0 	,	4190 },
    {1 	,	4171 },
    {3 	,	4155 },
    {4 	,	4141 },
    {5 	,	4127 },
    {7 	,	4114 },
    {8 	,	4101 },
    {9 	,	4089 },
    {11 ,	4077 },
    {12 ,	4066 },
    {14 ,	4053 },
    {15 ,	4041 },
    {16 ,	4029 },
    {18 ,	4018 },
    {19 ,	4007 },
    {20 ,	3997 },
    {22 ,	3987 },
    {23 ,	3978 },
    {24 ,	3969 },
    {26 ,	3961 },
    {27 ,	3952 },
    {28 ,	3944 },
    {30 ,	3935 },
    {31 ,	3927 },
    {33 ,	3919 },
    {34 ,	3912 },
    {35 ,	3904 },
    {37 ,	3896 },
    {38 ,	3887 },
    {39 ,	3876 },
    {41 ,	3863 },
    {42 ,	3851 },
    {43 ,	3842 },
    {45 ,	3834 },
    {46 ,	3827 },
    {47 ,	3821 },
    {49 ,	3816 },
    {50 ,	3811 },
    {52 ,	3807 },
    {53 ,	3803 },
    {54 ,	3799 },
    {56 ,	3795 },
    {57 ,	3792 },
    {58 ,	3789 },
    {60 ,	3786 },
    {61 ,	3784 },
    {62 ,	3781 },
    {64 ,	3779 },
    {65 ,	3778 },
    {66 ,	3776 },
    {68 ,	3774 },
    {69 ,	3772 },
    {71 ,	3769 },
    {72 ,	3764 },
    {73 ,	3759 },
    {75 ,	3754 },
    {76 ,	3749 },
    {77 ,	3744 },
    {79 ,	3740 },
    {80 ,	3736 },
    {81 ,	3731 },
    {83 ,	3725 },
    {84 ,	3718 },
    {85 ,	3711 },
    {87 ,	3704 },
    {88 ,	3695 },
    {89 ,	3685 },
    {91 ,	3681 },
    {92 ,	3677 },
    {94 ,	3672 },
    {95 ,	3662 },
    {96 ,	3629 },
    {98 ,	3570 },
    {99 ,	3490 },
    {100,	3370 },
    {101,	3285 }
};

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3_bat1[] =
{
    {0 	,	4194 },
    {1 	,	4176 },
    {3 	,	4159 },
    {4 	,	4145 },
    {5 	,	4130 },
    {7 	,	4117 },
    {8 	,	4103 },
    {9 	,	4090 },
    {11 ,	4078 },
    {12 ,	4066 },
    {14 ,	4054 },
    {15 ,	4042 },
    {16 ,	4031 },
    {18 ,	4020 },
    {19 ,	4009 },
    {20 ,	3999 },
    {22 ,	3988 },
    {23 ,	3978 },
    {24 ,	3969 },
    {26 ,	3960 },
    {27 ,	3951 },
    {28 ,	3942 },
    {30 ,	3933 },
    {31 ,	3925 },
    {33 ,	3917 },
    {34 ,	3909 },
    {35 ,	3902 },
    {37 ,	3894 },
    {38 ,	3887 },
    {39 ,	3878 },
    {41 ,	3867 },
    {42 ,	3853 },
    {43 ,	3841 },
    {45 ,	3833 },
    {46 ,	3826 },
    {47 ,	3820 },
    {49 ,	3814 },
    {50 ,	3810 },
    {51 ,	3805 },
    {53 ,	3800 },
    {54 ,	3796 },
    {56 ,	3792 },
    {57 ,	3789 },
    {58 ,	3785 },
    {60 ,	3782 },
    {61 ,	3779 },
    {62 ,	3776 },
    {64 ,	3774 },
    {65 ,	3772 },
    {66 ,	3769 },
    {68 ,	3767 },
    {69 ,	3765 },
    {70 ,	3760 },
    {72 ,	3750 },
    {73 ,	3743 },
    {74 ,	3737 },
    {76 ,	3732 },
    {77 ,	3726 },
    {79 ,	3721 },
    {80 ,	3717 },
    {81 ,	3712 },
    {83 ,	3707 },
    {84 ,	3700 },
    {85 ,	3692 },
    {87 ,	3685 },
    {88 ,	3676 },
    {89 ,	3667 },
    {91 ,	3663 },
    {92 ,	3659 },
    {93 ,	3654 },
    {95 ,	3645 },
    {96 ,	3615 },
    {98 ,	3562 },
    {99 ,	3488 },
    {100,	3382 },
    {101,	3249 }
};


//BAT2 ATL DOD0 profile
// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0_bat2[] =
{
    {0 ,	4143 },
    {2 ,	4108 },
    {4 ,	4088 },
    {7 ,	4073 },
    {9 ,	4059 },
    {11 ,	4045 },
    {13 ,	4032 },
    {16 ,	4020 },
    {18 ,	4008 },
    {20 ,	3997 },
    {22 ,	3987 },
    {24 ,	3977 },
    {27 ,	3967 },
    {29 ,	3958 },
    {31 ,	3948 },
    {33 ,	3940 },
    {36 ,	3930 },
    {38 ,	3921 },
    {40 ,	3911 },
    {42 ,	3902 },
    {44 ,	3892 },
    {47 ,	3882 },
    {49 ,	3872 },
    {51 ,	3862 },
    {53 ,	3852 },
    {56 ,	3843 },
    {58 ,	3835 },
    {60 ,	3827 },
    {62 ,	3820 },
    {65 ,	3814 },
    {67 ,	3809 },
    {69 ,	3804 },
    {71 ,	3800 },
    {73 ,	3796 },
    {76 ,	3794 },
    {78 ,	3791 },
    {80 ,	3789 },
    {82 ,	3786 },
    {85 ,	3785 },
    {87 ,	3783 },
    {89 ,	3781 },
    {91 ,	3779 },
    {93 ,	3777 },
    {96 ,	3775 },
    {98 ,	3773 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 },
    {100,	3771 }
};

// T1 0C
BATTERY_PROFILE_STRUC battery_profile_t1_bat2[] =
{
    {0 ,	4165 },
    {2 ,	4139 },
    {3 ,	4121 },
    {5 ,	4107 },
    {6 ,	4093 },
    {8 ,	4080 },
    {9 ,	4068 },
    {11,	4056 },
    {13,	4044 },
    {14,	4032 },
    {16,	4021 },
    {17,	4010 },
    {19,	3999 },
    {20,	3989 },
    {22,	3980 },
    {23,	3970 },
    {25,	3961 },
    {27,	3952 },
    {28,	3943 },
    {30,	3935 },
    {31,	3927 },
    {33,	3918 },
    {34,	3908 },
    {36,	3899 },
    {38,	3889 },
    {39,	3878 },
    {41,	3867 },
    {42,	3856 },
    {44,	3846 },
    {45,	3837 },
    {47,	3829 },
    {48,	3822 },
    {50,	3817 },
    {52,	3811 },
    {53,	3806 },
    {55,	3802 },
    {56,	3798 },
    {58,	3794 },
    {59,	3790 },
    {61,	3787 },
    {63,	3784 },
    {64,	3782 },
    {66,	3780 },
    {67,	3779 },
    {69,	3777 },
    {70,	3776 },
    {72,	3774 },
    {73,	3772 },
    {75,	3771 },
    {77,	3769 },
    {78,	3766 },
    {80,	3763 },
    {81,	3759 },
    {83,	3753 },
    {84,	3746 },
    {86,	3737 },
    {88,	3727 },
    {89,	3717 },
    {91,	3706 },
    {92,	3697 },
    {94,	3690 },
    {95,	3685 },
    {97,	3680 },
    {98,	3676 },
    {100,	3671 },
    {100,	3671 },
    {100,	3671 },
    {100,	3671 },
    {100,	3671 },
    {100,	3671 },
    {100,	3671 },
    {100,	3671 },
    {100,	3671 },
    {100,	3671 },
    {100,	3671 },
    {100,	3671 }
};

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2_bat2[] =
{
    {0 ,	4188 },
    {1 ,	4168 },
    {3 ,	4153 },
    {4 ,	4139 },
    {6 ,	4126 },
    {7 ,	4112 },
    {8 ,	4100 },
    {10 ,	4087 },
    {11 ,	4075 },
    {12 ,	4063 },
    {14 ,	4052 },
    {15 ,	4040 },
    {17 ,	4029 },
    {18 ,	4018 },
    {19 ,	4007 },
    {21 ,	3997 },
    {22 ,	3988 },
    {24 ,	3978 },
    {25 ,	3969 },
    {26 ,	3960 },
    {28 ,	3951 },
    {29 ,	3943 },
    {31 ,	3935 },
    {32 ,	3927 },
    {33 ,	3919 },
    {35 ,	3912 },
    {36 ,	3905 },
    {37 ,	3897 },
    {39 ,	3889 },
    {40 ,	3880 },
    {42 ,	3869 },
    {43 ,	3855 },
    {44 ,	3842 },
    {46 ,	3832 },
    {47 ,	3824 },
    {49 ,	3818 },
    {50 ,	3813 },
    {51 ,	3808 },
    {53 ,	3804 },
    {54 ,	3800 },
    {55 ,	3796 },
    {57 ,	3792 },
    {58 ,	3789 },
    {60 ,	3786 },
    {61 ,	3783 },
    {62 ,	3780 },
    {64 ,	3778 },
    {65 ,	3776 },
    {67 ,	3774 },
    {68 ,	3771 },
    {69 ,	3770 },
    {71 ,	3768 },
    {72 ,	3765 },
    {73 ,	3762 },
    {75 ,	3759 },
    {76 ,	3755 },
    {78 ,	3749 },
    {79 ,	3743 },
    {80 ,	3737 },
    {82 ,	3730 },
    {83 ,	3720 },
    {85 ,	3708 },
    {86 ,	3696 },
    {87 ,	3682 },
    {89 ,	3678 },
    {90 ,	3675 },
    {92 ,	3672 },
    {93 ,	3669 },
    {94 ,	3664 },
    {96 ,	3651 },
    {97 ,	3602 },
    {98 ,	3525 },
    {100,	3412 },
    {100,	3378 },
    {100,	3378 },
    {100,	3378 }
};

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3_bat2[] =
{
    {0 ,	4193 },
    {1 ,	4176 },
    {3 ,	4162 },
    {4 ,	4147 },
    {6 ,	4134 },
    {7 ,	4121 },
    {8 ,	4107 },
    {10 ,	4095 },
    {11 ,	4082 },
    {12 ,	4070 },
    {14 ,	4058 },
    {15 ,	4046 },
    {17 ,	4035 },
    {18 ,	4024 },
    {19 ,	4013 },
    {21 ,	4002 },
    {22 ,	3992 },
    {23 ,	3982 },
    {25 ,	3972 },
    {26 ,	3963 },
    {28 ,	3954 },
    {29 ,	3945 },
    {30 ,	3937 },
    {32 ,	3929 },
    {33 ,	3920 },
    {35 ,	3913 },
    {36 ,	3905 },
    {37 ,	3898 },
    {39 ,	3891 },
    {40 ,	3884 },
    {41 ,	3876 },
    {43 ,	3865 },
    {44 ,	3850 },
    {46 ,	3836 },
    {47 ,	3827 },
    {48 ,	3820 },
    {50 ,	3814 },
    {51 ,	3809 },
    {52 ,	3805 },
    {54 ,	3800 },
    {55 ,	3796 },
    {57 ,	3792 },
    {58 ,	3788 },
    {59 ,	3785 },
    {61 ,	3781 },
    {62 ,	3778 },
    {64 ,	3776 },
    {65 ,	3773 },
    {66 ,	3771 },
    {68 ,	3768 },
    {69 ,	3766 },
    {70 ,	3763 },
    {72 ,	3755 },
    {73 ,	3746 },
    {75 ,	3743 },
    {76 ,	3739 },
    {77 ,	3734 },
    {79 ,	3728 },
    {80 ,	3722 },
    {81 ,	3717 },
    {83 ,	3710 },
    {84 ,	3698 },
    {86 ,	3688 },
    {87 ,	3673 },
    {88 ,	3666 },
    {90 ,	3663 },
    {91 ,	3660 },
    {92 ,	3657 },
    {94 ,	3654 },
    {95 ,	3647 },
    {97 ,	3615 },
    {98 ,	3551 },
    {99 ,	3462 },
    {101,	3319 },
    {101,	3278 },
    {101,	3278 }
};

//BAT3 DOD0 profile
// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0_bat3[] =
{
    {0 ,	4159 },
    {2 ,	4131 },
    {4 ,	4111 },
    {7 ,	4096 },
    {9 ,	4083 },
    {11 ,	4071 },
    {13 ,	4055 },
    {15 ,	4037 },
    {17 ,	4020 },
    {20 ,	4005 },
    {22 ,	3993 },
    {24 ,	3984 },
    {26 ,	3975 },
    {28 ,	3967 },
    {30 ,	3959 },
    {33 ,	3952 },
    {35 ,	3945 },
    {37 ,	3938 },
    {39 ,	3930 },
    {41 ,	3922 },
    {43 ,	3913 },
    {46 ,	3904 },
    {48 ,	3894 },
    {50 ,	3884 },
    {52 ,	3873 },
    {54 ,	3863 },
    {57 ,	3853 },
    {59 ,	3844 },
    {61 ,	3836 },
    {63 ,	3830 },
    {65 ,	3824 },
    {67 ,	3819 },
    {70 ,	3814 },
    {72 ,	3810 },
    {74 ,	3806 },
    {76 ,	3803 },
    {78 ,	3800 },
    {80 ,	3797 },
    {83 ,	3795 },
    {85 ,	3793 },
    {87 ,	3791 },
    {89 ,	3789 },
    {91 ,	3788 },
    {93 ,	3786 },
    {96 ,	3785 },
    {98 ,	3783 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 },
    {100,	3778 }
};

// T1 0C
BATTERY_PROFILE_STRUC battery_profile_t1_bat3[] =
{
    {0 ,	4178 },
    {1 ,	4157 },
    {3 ,	4142 },
    {4 ,	4128 },
    {6 ,	4115 },
    {7 ,	4103 },
    {9 ,	4092 },
    {10 ,	4083 },
    {12 ,	4073 },
    {13 ,	4060 },
    {15 ,	4045 },
    {16 ,	4029 },
    {17 ,	4015 },
    {19 ,	4003 },
    {20 ,	3992 },
    {22 ,	3983 },
    {23 ,	3975 },
    {25 ,	3967 },
    {26 ,	3959 },
    {28 ,	3952 },
    {29 ,	3946 },
    {31 ,	3938 },
    {32 ,	3931 },
    {33 ,	3923 },
    {35 ,	3915 },
    {36 ,	3907 },
    {38 ,	3898 },
    {39 ,	3887 },
    {41 ,	3876 },
    {42 ,	3864 },
    {44 ,	3853 },
    {45 ,	3843 },
    {47 ,	3835 },
    {48 ,	3828 },
    {49 ,	3822 },
    {51 ,	3817 },
    {52 ,	3813 },
    {54 ,	3808 },
    {55 ,	3805 },
    {57 ,	3801 },
    {58 ,	3797 },
    {60 ,	3794 },
    {61 ,	3791 },
    {63 ,	3789 },
    {64 ,	3787 },
    {66 ,	3786 },
    {67 ,	3785 },
    {68 ,	3783 },
    {70 ,	3782 },
    {71 ,	3780 },
    {73 ,	3779 },
    {74 ,	3778 },
    {76 ,	3776 },
    {77 ,	3773 },
    {79 ,	3771 },
    {80 ,	3767 },
    {82 ,	3763 },
    {83 ,	3757 },
    {84 ,	3749 },
    {86 ,	3740 },
    {87 ,	3730 },
    {89 ,	3719 },
    {90 ,	3709 },
    {92 ,	3702 },
    {93 ,	3697 },
    {95 ,	3694 },
    {96 ,	3691 },
    {98 ,	3687 },
    {99 ,	3681 },
    {100 ,	3670 },
    {100 ,	3670 },
    {100 ,	3670 },
    {100 ,	3670 },
    {100 ,	3670 },
    {100 ,	3670 },
    {100 ,	3670 }
};

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2_bat3[] =
{
    {0 ,	4190 },
    {1 ,	4175 },
    {3 ,	4161 },
    {4 ,	4148 },
    {5 ,	4135 },
    {7 ,	4123 },
    {8 ,	4111 },
    {9 ,	4099 },
    {11 ,	4087 },
    {12 ,	4077 },
    {14 ,	4067 },
    {15 ,	4055 },
    {16 ,	4043 },
    {18 ,	4030 },
    {19 ,	4017 },
    {20 ,	4006 },
    {22 ,	3996 },
    {23 ,	3986 },
    {24 ,	3977 },
    {26 ,	3969 },
    {27 ,	3963 },
    {28 ,	3955 },
    {30 ,	3946 },
    {31 ,	3938 },
    {32 ,	3931 },
    {34 ,	3923 },
    {35 ,	3916 },
    {37 ,	3909 },
    {38 ,	3902 },
    {39 ,	3895 },
    {41 ,	3886 },
    {42 ,	3875 },
    {43 ,	3861 },
    {45 ,	3847 },
    {46 ,	3836 },
    {47 ,	3829 },
    {49 ,	3823 },
    {50 ,	3818 },
    {51 ,	3813 },
    {53 ,	3809 },
    {54 ,	3805 },
    {55 ,	3801 },
    {57 ,	3797 },
    {58 ,	3794 },
    {60 ,	3791 },
    {61 ,	3788 },
    {62 ,	3785 },
    {64 ,	3783 },
    {65 ,	3780 },
    {66 ,	3778 },
    {68 ,	3776 },
    {69 ,	3774 },
    {70 ,	3773 },
    {72 ,	3771 },
    {73 ,	3767 },
    {74 ,	3764 },
    {76 ,	3760 },
    {77 ,	3754 },
    {78 ,	3748 },
    {80 ,	3743 },
    {81 ,	3737 },
    {83 ,	3729 },
    {84 ,	3717 },
    {85 ,	3706 },
    {87 ,	3692 },
    {88 ,	3687 },
    {89 ,	3685 },
    {91 ,	3684 },
    {92 ,	3683 },
    {93 ,	3680 },
    {95 ,	3675 },
    {96 ,	3648 },
    {97 ,	3589 },
    {99 ,	3509 },
    {100,	3391 },
    {101,	3333 }
};

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3_bat3[] =
{
    {0 ,	4193 },
    {1 ,	4178 },
    {3 ,	4164 },
    {4 ,	4151 },
    {5 ,	4138 },
    {7 ,	4125 },
    {8 ,	4113 },
    {9 ,	4101 },
    {11 ,	4089 },
    {12 ,	4077 },
    {13 ,	4065 },
    {15 ,	4055 },
    {16 ,	4044 },
    {17 ,	4032 },
    {19 ,	4021 },
    {20 ,	4010 },
    {21 ,	4000 },
    {23 ,	3991 },
    {24 ,	3981 },
    {25 ,	3972 },
    {27 ,	3963 },
    {28 ,	3955 },
    {29 ,	3946 },
    {31 ,	3937 },
    {32 ,	3930 },
    {34 ,	3922 },
    {35 ,	3914 },
    {36 ,	3907 },
    {38 ,	3900 },
    {39 ,	3893 },
    {40 ,	3886 },
    {42 ,	3879 },
    {43 ,	3868 },
    {44 ,	3855 },
    {46 ,	3840 },
    {47 ,	3831 },
    {48 ,	3824 },
    {50 ,	3818 },
    {51 ,	3813 },
    {52 ,	3809 },
    {54 ,	3804 },
    {55 ,	3800 },
    {56 ,	3796 },
    {58 ,	3793 },
    {59 ,	3789 },
    {60 ,	3786 },
    {62 ,	3783 },
    {63 ,	3780 },
    {64 ,	3777 },
    {66 ,	3775 },
    {67 ,	3772 },
    {68 ,	3770 },
    {70 ,	3767 },
    {71 ,	3762 },
    {72 ,	3753 },
    {74 ,	3749 },
    {75 ,	3745 },
    {76 ,	3740 },
    {78 ,	3735 },
    {79 ,	3730 },
    {80 ,	3725 },
    {82 ,	3720 },
    {83 ,	3711 },
    {84 ,	3699 },
    {86 ,	3688 },
    {87 ,	3674 },
    {88 ,	3672 },
    {90 ,	3671 },
    {91 ,	3669 },
    {92 ,	3667 },
    {94 ,	3664 },
    {95 ,	3655 },
    {97 ,	3618 },
    {98 ,	3560 },
    {99 ,	3478 },
    {101,	3350 }
};

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0}
};

/////////////////////////////////////////////////////////////////////
// <Rbat, Battery_Voltage> Table
/////////////////////////////////////////////////////////////////////
typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;


//BAT1 R profile
// T0 -10C
R_PROFILE_STRUC r_profile_t0_bat1[] =
{
    {201,	4186 },
    {201,	4167 },
    {206,	4142 },
    {243,	4109 },
    {282,	4082 },
    {319,	4062 },
    {335,	4045 },
    {343,	4029 },
    {345,	4015 },
    {348,	4002 },
    {351,	3990 },
    {354,	3979 },
    {355,	3968 },
    {358,	3958 },
    {359,	3948 },
    {358,	3937 },
    {357,	3926 },
    {357,	3915 },
    {356,	3904 },
    {353,	3893 },
    {352,	3883 },
    {352,	3874 },
    {352,	3865 },
    {352,	3857 },
    {354,	3850 },
    {354,	3843 },
    {355,	3837 },
    {358,	3831 },
    {360,	3825 },
    {363,	3820 },
    {366,	3815 },
    {369,	3810 },
    {371,	3805 },
    {372,	3800 },
    {375,	3796 },
    {378,	3792 },
    {380,	3788 },
    {383,	3784 },
    {384,	3780 },
    {387,	3776 },
    {392,	3773 },
    {395,	3769 },
    {397,	3765 },
    {400,	3761 },
    {402,	3756 },
    {406,	3750 },
    {410,	3745 },
    {413,	3738 },
    {416,	3731 },
    {419,	3723 },
    {425,	3715 },
    {433,	3707 },
    {442,	3702 },
    {456,	3696 },
    {477,	3689 },
    {499,	3675 },
    {522,	3644 },
    {544,	3588 },
    {548,	3528 },
    {548,	3528 },
    {548,	3528 },
    {548,	3528 },
    {548,	3528 },
    {548,	3528 },
    {548,	3528 },
    {548,	3528 },
    {548,	3528 },
    {548,	3528 },
    {548,	3528 },
    {548,	3528 },
    {548,	3528 },
    {548,	3528 },
    {548,	3528 },
    {548,	3528 },
    {548,	3528 },
    {548,	3528 }
};

// T1 0C
R_PROFILE_STRUC r_profile_t1_bat1[] =
{
    {162 ,	4181 },
    {162 ,	4154 },
    {169 ,	4135 },
    {173 ,	4120 },
    {175 ,	4105 },
    {177 ,	4093 },
    {181 ,	4081 },
    {182 ,	4069 },
    {183 ,	4056 },
    {185 ,	4043 },
    {188 ,	4031 },
    {190 ,	4018 },
    {192 ,	4007 },
    {194 ,	3996 },
    {197 ,	3987 },
    {200 ,	3978 },
    {203 ,	3969 },
    {205 ,	3961 },
    {208 ,	3953 },
    {210 ,	3944 },
    {212 ,	3936 },
    {214 ,	3928 },
    {216 ,	3919 },
    {216 ,	3911 },
    {215 ,	3901 },
    {212 ,	3892 },
    {206 ,	3881 },
    {201 ,	3870 },
    {194 ,	3860 },
    {190 ,	3850 },
    {187 ,	3842 },
    {185 ,	3834 },
    {185 ,	3828 },
    {186 ,	3822 },
    {185 ,	3817 },
    {186 ,	3812 },
    {187 ,	3807 },
    {188 ,	3803 },
    {189 ,	3800 },
    {189 ,	3796 },
    {192 ,	3793 },
    {192 ,	3790 },
    {194 ,	3787 },
    {195 ,	3785 },
    {197 ,	3783 },
    {198 ,	3781 },
    {199 ,	3779 },
    {201 ,	3778 },
    {201 ,	3776 },
    {203 ,	3774 },
    {203 ,	3772 },
    {203 ,	3769 },
    {203 ,	3766 },
    {202 ,	3762 },
    {202 ,	3758 },
    {203 ,	3754 },
    {204 ,	3750 },
    {204 ,	3745 },
    {206 ,	3739 },
    {208 ,	3733 },
    {208 ,	3726 },
    {212 ,	3720 },
    {216 ,	3711 },
    {214 ,	3700 },
    {217 ,	3692 },
    {226 ,	3688 },
    {240 ,	3682 },
    {264 ,	3676 },
    {295 ,	3661 },
    {316 ,	3619 },
    {371 ,	3552 },
    {490 ,	3457 },
    {518 ,	3407 },
    {518 ,	3407 },
    {518 ,	3407 },
    {518 ,	3407 }
};

// T2 25C
R_PROFILE_STRUC r_profile_t2_bat1[] =
{
    {110 ,	4190 },
    {110 ,	4171 },
    {110 ,	4155 },
    {112 ,	4141 },
    {113 ,	4127 },
    {112 ,	4114 },
    {113 ,	4101 },
    {113 ,	4089 },
    {115 ,	4077 },
    {115 ,	4066 },
    {116 ,	4053 },
    {115 ,	4041 },
    {115 ,	4029 },
    {116 ,	4018 },
    {116 ,	4007 },
    {118 ,	3997 },
    {118 ,	3987 },
    {120 ,	3978 },
    {120 ,	3969 },
    {122 ,	3961 },
    {124 ,	3952 },
    {126 ,	3944 },
    {127 ,	3935 },
    {129 ,	3927 },
    {131 ,	3919 },
    {133 ,	3912 },
    {135 ,	3904 },
    {136 ,	3896 },
    {135 ,	3887 },
    {131 ,	3876 },
    {122 ,	3863 },
    {116 ,	3851 },
    {112 ,	3842 },
    {110 ,	3834 },
    {109 ,	3827 },
    {108 ,	3821 },
    {108 ,	3816 },
    {107 ,	3811 },
    {108 ,	3807 },
    {108 ,	3803 },
    {109 ,	3799 },
    {109 ,	3795 },
    {110 ,	3792 },
    {110 ,	3789 },
    {110 ,	3786 },
    {112 ,	3784 },
    {113 ,	3781 },
    {115 ,	3779 },
    {117 ,	3778 },
    {118 ,	3776 },
    {119 ,	3774 },
    {118 ,	3772 },
    {116 ,	3769 },
    {113 ,	3764 },
    {111 ,	3759 },
    {109 ,	3754 },
    {109 ,	3749 },
    {109 ,	3744 },
    {111 ,	3740 },
    {112 ,	3736 },
    {113 ,	3731 },
    {114 ,	3725 },
    {115 ,	3718 },
    {116 ,	3711 },
    {117 ,	3704 },
    {118 ,	3695 },
    {119 ,	3685 },
    {121 ,	3681 },
    {125 ,	3677 },
    {130 ,	3672 },
    {137 ,	3662 },
    {136 ,	3629 },
    {142 ,	3570 },
    {154 ,	3490 },
    {182 ,	3370 },
    {215 ,	3285 }
};

// T3 50C
R_PROFILE_STRUC r_profile_t3_bat1[] =
{
    {83 ,	4194 },
    {83 ,	4176 },
    {84 ,	4159 },
    {84 ,	4145 },
    {84 ,	4130 },
    {85 ,	4117 },
    {85 ,	4103 },
    {85 ,	4090 },
    {86 ,	4078 },
    {85 ,	4066 },
    {85 ,	4054 },
    {86 ,	4042 },
    {87 ,	4031 },
    {87 ,	4020 },
    {87 ,	4009 },
    {88 ,	3999 },
    {87 ,	3988 },
    {88 ,	3978 },
    {89 ,	3969 },
    {90 ,	3960 },
    {90 ,	3951 },
    {91 ,	3942 },
    {92 ,	3933 },
    {93 ,	3925 },
    {93 ,	3917 },
    {95 ,	3909 },
    {96 ,	3902 },
    {99 ,	3894 },
    {101,	3887 },
    {103,	3878 },
    {100,	3867 },
    {91 ,	3853 },
    {88 ,	3841 },
    {87 ,	3833 },
    {87 ,	3826 },
    {86 ,	3820 },
    {86 ,	3814 },
    {87 ,	3810 },
    {87 ,	3805 },
    {87 ,	3800 },
    {87 ,	3796 },
    {88 ,	3792 },
    {87 ,	3789 },
    {88 ,	3785 },
    {88 ,	3782 },
    {89 ,	3779 },
    {90 ,	3776 },
    {90 ,	3774 },
    {92 ,	3772 },
    {92 ,	3769 },
    {93 ,	3767 },
    {95 ,	3765 },
    {90 ,	3760 },
    {85 ,	3750 },
    {85 ,	3743 },
    {85 ,	3737 },
    {86 ,	3732 },
    {86 ,	3726 },
    {86 ,	3721 },
    {87 ,	3717 },
    {87 ,	3712 },
    {88 ,	3707 },
    {87 ,	3700 },
    {87 ,	3692 },
    {88 ,	3685 },
    {88 ,	3676 },
    {88 ,	3667 },
    {89 ,	3663 },
    {90 ,	3659 },
    {92 ,	3654 },
    {93 ,	3645 },
    {93 ,	3615 },
    {98 ,	3562 },
    {102,	3488 },
    {111,	3382 },
    {125,	3249 }
};

//BAT2 R profile
// T0 -10C
R_PROFILE_STRUC r_profile_t0_bat2[] =
{
    {670 ,	4143 },
    {670 ,	4108 },
    {686 ,	4088 },
    {696 ,	4073 },
    {705 ,	4059 },
    {713 ,	4045 },
    {721 ,	4032 },
    {727 ,	4020 },
    {735 ,	4008 },
    {743 ,	3997 },
    {750 ,	3987 },
    {756 ,	3977 },
    {763 ,	3967 },
    {769 ,	3958 },
    {775 ,	3948 },
    {781 ,	3940 },
    {784 ,	3930 },
    {788 ,	3921 },
    {793 ,	3911 },
    {794 ,	3902 },
    {796 ,	3892 },
    {798 ,	3882 },
    {799 ,	3872 },
    {800 ,	3862 },
    {801 ,	3852 },
    {802 ,	3843 },
    {803 ,	3835 },
    {805 ,	3827 },
    {808 ,	3820 },
    {812 ,	3814 },
    {816 ,	3809 },
    {820 ,	3804 },
    {827 ,	3800 },
    {833 ,	3796 },
    {841 ,	3794 },
    {850 ,	3791 },
    {858 ,	3789 },
    {867 ,	3786 },
    {878 ,	3785 },
    {887 ,	3783 },
    {897 ,	3781 },
    {906 ,	3779 },
    {916 ,	3777 },
    {928 ,	3775 },
    {937 ,	3773 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 },
    {919 ,	3771 }
};

// T1 0C
R_PROFILE_STRUC r_profile_t1_bat2[] =
{
    {452 ,	4165 },
    {452 ,	4139 },
    {458 ,	4121 },
    {465 ,	4107 },
    {470 ,	4093 },
    {475 ,	4080 },
    {480 ,	4068 },
    {485 ,	4056 },
    {488 ,	4044 },
    {493 ,	4032 },
    {498 ,	4021 },
    {502 ,	4010 },
    {503 ,	3999 },
    {508 ,	3989 },
    {513 ,	3980 },
    {517 ,	3970 },
    {522 ,	3961 },
    {525 ,	3952 },
    {528 ,	3943 },
    {533 ,	3935 },
    {538 ,	3927 },
    {538 ,	3918 },
    {538 ,	3908 },
    {540 ,	3899 },
    {540 ,	3889 },
    {537 ,	3878 },
    {533 ,	3867 },
    {530 ,	3856 },
    {528 ,	3846 },
    {527 ,	3837 },
    {527 ,	3829 },
    {527 ,	3822 },
    {450 ,	3817 },
    {510 ,	3811 },
    {513 ,	3806 },
    {515 ,	3802 },
    {517 ,	3798 },
    {518 ,	3794 },
    {517 ,	3790 },
    {520 ,	3787 },
    {523 ,	3784 },
    {528 ,	3782 },
    {533 ,	3780 },
    {507 ,	3779 },
    {513 ,	3777 },
    {520 ,	3776 },
    {527 ,	3774 },
    {533 ,	3772 },
    {542 ,	3771 },
    {550 ,	3769 },
    {555 ,	3766 },
    {563 ,	3763 },
    {570 ,	3759 },
    {577 ,	3753 },
    {585 ,	3746 },
    {593 ,	3737 },
    {603 ,	3727 },
    {617 ,	3717 },
    {630 ,	3706 },
    {645 ,	3697 },
    {662 ,	3690 },
    {683 ,	3685 },
    {708 ,	3680 },
    {743 ,	3676 },
    {787 ,	3671 },
    {787 ,	3671 },
    {787 ,	3671 },
    {787 ,	3671 },
    {787 ,	3671 },
    {787 ,	3671 },
    {787 ,	3671 },
    {787 ,	3671 },
    {787 ,	3671 },
    {787 ,	3671 },
    {787 ,	3671 },
    {787 ,	3671 }
};

// T2 25C
R_PROFILE_STRUC r_profile_t2_bat2[] =
{
    {141 ,	4188 },
    {141 ,	4168 },
    {142 ,	4153 },
    {144 ,	4139 },
    {144 ,	4126 },
    {145 ,	4112 },
    {147 ,	4100 },
    {147 ,	4087 },
    {149 ,	4075 },
    {150 ,	4063 },
    {151 ,	4052 },
    {152 ,	4040 },
    {154 ,	4029 },
    {155 ,	4018 },
    {156 ,	4007 },
    {157 ,	3997 },
    {160 ,	3988 },
    {162 ,	3978 },
    {165 ,	3969 },
    {167 ,	3960 },
    {169 ,	3951 },
    {172 ,	3943 },
    {175 ,	3935 },
    {178 ,	3927 },
    {180 ,	3919 },
    {183 ,	3912 },
    {186 ,	3905 },
    {185 ,	3897 },
    {183 ,	3889 },
    {181 ,	3880 },
    {175 ,	3869 },
    {166 ,	3855 },
    {156 ,	3842 },
    {151 ,	3832 },
    {148 ,	3824 },
    {146 ,	3818 },
    {146 ,	3813 },
    {146 ,	3808 },
    {147 ,	3804 },
    {148 ,	3800 },
    {150 ,	3796 },
    {151 ,	3792 },
    {152 ,	3789 },
    {152 ,	3786 },
    {153 ,	3783 },
    {154 ,	3780 },
    {155 ,	3778 },
    {156 ,	3776 },
    {157 ,	3774 },
    {158 ,	3771 },
    {159 ,	3770 },
    {159 ,	3768 },
    {159 ,	3765 },
    {159 ,	3762 },
    {159 ,	3759 },
    {160 ,	3755 },
    {159 ,	3749 },
    {159 ,	3743 },
    {160 ,	3737 },
    {162 ,	3730 },
    {163 ,	3720 },
    {164 ,	3708 },
    {190 ,	3696 },
    {193 ,	3682 },
    {197 ,	3678 },
    {201 ,	3675 },
    {207 ,	3672 },
    {215 ,	3669 },
    {228 ,	3664 },
    {240 ,	3651 },
    {241 ,	3602 },
    {256 ,	3525 },
    {282 ,	3412 },
    {297 ,	3378 },
    {297 ,	3378 },
    {297 ,	3378 }
};

// T3 50C
R_PROFILE_STRUC r_profile_t3_bat2[] =
{
    {91 ,	4193 },
    {91 ,	4176 },
    {90 ,	4162 },
    {91 ,	4147 },
    {91 ,	4134 },
    {91 ,	4121 },
    {92 ,	4107 },
    {92 ,	4095 },
    {92 ,	4082 },
    {93 ,	4070 },
    {93 ,	4058 },
    {93 ,	4046 },
    {93 ,	4035 },
    {94 ,	4024 },
    {94 ,	4013 },
    {95 ,	4002 },
    {95 ,	3992 },
    {96 ,	3982 },
    {96 ,	3972 },
    {97 ,	3963 },
    {98 ,	3954 },
    {99 ,	3945 },
    {100,	3937 },
    {101,	3929 },
    {102,	3920 },
    {104,	3913 },
    {107,	3905 },
    {109,	3898 },
    {113,	3891 },
    {116,	3884 },
    {118,	3876 },
    {116,	3865 },
    {107,	3850 },
    {98 ,	3836 },
    {95 ,	3827 },
    {93 ,	3820 },
    {93 ,	3814 },
    {94 ,	3809 },
    {94 ,	3805 },
    {94 ,	3800 },
    {94 ,	3796 },
    {95 ,	3792 },
    {95 ,	3788 },
    {95 ,	3785 },
    {96 ,	3781 },
    {97 ,	3778 },
    {98 ,	3776 },
    {99 ,	3773 },
    {100,	3771 },
    {100,	3768 },
    {102,	3766 },
    {102,	3763 },
    {97 ,	3755 },
    {93 ,	3746 },
    {96 ,	3743 },
    {96 ,	3739 },
    {96 ,	3734 },
    {96 ,	3728 },
    {95 ,	3722 },
    {96 ,	3717 },
    {97 ,	3710 },
    {96 ,	3698 },
    {97 ,	3688 },
    {96 ,	3673 },
    {97 ,	3666 },
    {97 ,	3663 },
    {98 ,	3660 },
    {100,	3657 },
    {103,	3654 },
    {107,	3647 },
    {104,	3615 },
    {108,	3551 },
    {114,	3462 },
    {122,	3319 },
    {130,	3278 },
    {130,	3278 }
};

//BAT3 R profile
// T0 -10C
R_PROFILE_STRUC r_profile_t0_bat3[] =
{
    {587 ,	4159 },
    {587 ,	4131 },
    {614 ,	4111 },
    {632 ,	4096 },
    {646 ,	4083 },
    {656 ,	4071 },
    {671 ,	4055 },
    {671 ,	4037 },
    {680 ,	4020 },
    {687 ,	4005 },
    {698 ,	3993 },
    {705 ,	3984 },
    {712 ,	3975 },
    {719 ,	3967 },
    {727 ,	3959 },
    {734 ,	3952 },
    {751 ,	3945 },
    {758 ,	3938 },
    {764 ,	3930 },
    {772 ,	3922 },
    {779 ,	3913 },
    {782 ,	3904 },
    {784 ,	3894 },
    {786 ,	3884 },
    {790 ,	3873 },
    {795 ,	3863 },
    {793 ,	3853 },
    {793 ,	3844 },
    {798 ,	3836 },
    {806 ,	3830 },
    {806 ,	3824 },
    {812 ,	3819 },
    {823 ,	3814 },
    {826 ,	3810 },
    {835 ,	3806 },
    {841 ,	3803 },
    {850 ,	3800 },
    {858 ,	3797 },
    {866 ,	3795 },
    {878 ,	3793 },
    {889 ,	3791 },
    {898 ,	3789 },
    {913 ,	3788 },
    {929 ,	3786 },
    {945 ,	3785 },
    {957 ,	3783 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 },
    {930 ,	3778 }
};

// T1 0C
R_PROFILE_STRUC r_profile_t1_bat3[] =
{
    {273 ,	4178 },
    {273 ,	4157 },
    {280 ,	4142 },
    {285 ,	4128 },
    {290 ,	4115 },
    {293 ,	4103 },
    {295 ,	4092 },
    {302 ,	4083 },
    {308 ,	4073 },
    {313 ,	4060 },
    {318 ,	4045 },
    {322 ,	4029 },
    {325 ,	4015 },
    {328 ,	4003 },
    {333 ,	3992 },
    {337 ,	3983 },
    {342 ,	3975 },
    {345 ,	3967 },
    {353 ,	3959 },
    {357 ,	3952 },
    {363 ,	3946 },
    {367 ,	3938 },
    {375 ,	3931 },
    {378 ,	3923 },
    {383 ,	3915 },
    {387 ,	3907 },
    {390 ,	3898 },
    {390 ,	3887 },
    {388 ,	3876 },
    {387 ,	3864 },
    {383 ,	3853 },
    {382 ,	3843 },
    {388 ,	3835 },
    {392 ,	3828 },
    {393 ,	3822 },
    {398 ,	3817 },
    {405 ,	3813 },
    {408 ,	3808 },
    {413 ,	3805 },
    {417 ,	3801 },
    {425 ,	3797 },
    {430 ,	3794 },
    {433 ,	3791 },
    {440 ,	3789 },
    {447 ,	3787 },
    {458 ,	3786 },
    {468 ,	3785 },
    {478 ,	3783 },
    {490 ,	3782 },
    {502 ,	3780 },
    {513 ,	3779 },
    {527 ,	3778 },
    {537 ,	3776 },
    {547 ,	3773 },
    {557 ,	3771 },
    {565 ,	3767 },
    {577 ,	3763 },
    {583 ,	3757 },
    {590 ,	3749 },
    {598 ,	3740 },
    {610 ,	3730 },
    {622 ,	3719 },
    {632 ,	3709 },
    {645 ,	3702 },
    {662 ,	3697 },
    {677 ,	3694 },
    {705 ,	3691 },
    {738 ,	3687 },
    {780 ,	3681 },
    {783 ,	3670 },
    {783 ,	3670 },
    {783 ,	3670 },
    {783 ,	3670 },
    {783 ,	3670 },
    {783 ,	3670 },
    {783 ,	3670 }
};

// T2 25C
R_PROFILE_STRUC r_profile_t2_bat3[] =
{
    {127 ,	4190 },
    {127 ,	4175 },
    {128 ,	4161 },
    {129 ,	4148 },
    {130 ,	4135 },
    {130 ,	4123 },
    {131 ,	4111 },
    {132 ,	4099 },
    {133 ,	4087 },
    {134 ,	4077 },
    {135 ,	4067 },
    {136 ,	4055 },
    {137 ,	4043 },
    {138 ,	4030 },
    {138 ,	4017 },
    {139 ,	4006 },
    {140 ,	3996 },
    {141 ,	3986 },
    {142 ,	3977 },
    {143 ,	3969 },
    {145 ,	3963 },
    {146 ,	3955 },
    {148 ,	3946 },
    {149 ,	3938 },
    {151 ,	3931 },
    {154 ,	3923 },
    {156 ,	3916 },
    {159 ,	3909 },
    {162 ,	3902 },
    {165 ,	3895 },
    {165 ,	3886 },
    {162 ,	3875 },
    {153 ,	3861 },
    {143 ,	3847 },
    {138 ,	3836 },
    {137 ,	3829 },
    {137 ,	3823 },
    {137 ,	3818 },
    {137 ,	3813 },
    {139 ,	3809 },
    {139 ,	3805 },
    {140 ,	3801 },
    {141 ,	3797 },
    {142 ,	3794 },
    {143 ,	3791 },
    {145 ,	3788 },
    {146 ,	3785 },
    {147 ,	3783 },
    {147 ,	3780 },
    {148 ,	3778 },
    {149 ,	3776 },
    {150 ,	3774 },
    {151 ,	3773 },
    {152 ,	3771 },
    {152 ,	3767 },
    {153 ,	3764 },
    {153 ,	3760 },
    {153 ,	3754 },
    {153 ,	3748 },
    {154 ,	3743 },
    {156 ,	3737 },
    {157 ,	3729 },
    {157 ,	3717 },
    {159 ,	3706 },
    {158 ,	3692 },
    {158 ,	3687 },
    {160 ,	3685 },
    {164 ,	3684 },
    {170 ,	3683 },
    {176 ,	3680 },
    {183 ,	3675 },
    {179 ,	3648 },
    {185 ,	3589 },
    {198 ,	3509 },
    {218 ,	3391 },
    {190 ,	3333 }
};

// T3 50C
R_PROFILE_STRUC r_profile_t3_bat3[] =
{
    {78 ,	4193 },
    {78 ,	4178 },
    {77 ,	4164 },
    {78 ,	4151 },
    {78 ,	4138 },
    {79 ,	4125 },
    {79 ,	4113 },
    {80 ,	4101 },
    {79 ,	4089 },
    {80 ,	4077 },
    {81 ,	4065 },
    {82 ,	4055 },
    {82 ,	4044 },
    {82 ,	4032 },
    {83 ,	4021 },
    {83 ,	4010 },
    {84 ,	4000 },
    {84 ,	3991 },
    {85 ,	3981 },
    {86 ,	3972 },
    {87 ,	3963 },
    {87 ,	3955 },
    {88 ,	3946 },
    {89 ,	3937 },
    {90 ,	3930 },
    {91 ,	3922 },
    {93 ,	3914 },
    {94 ,	3907 },
    {96 ,	3900 },
    {98 ,	3893 },
    {101,	3886 },
    {104 ,	3879 },
    {102 ,	3868 },
    {95 ,	3855 },
    {86 ,	3840 },
    {82 ,	3831 },
    {82 ,	3824 },
    {81 ,	3818 },
    {81 ,	3813 },
    {81 ,	3809 },
    {82 ,	3804 },
    {83 ,	3800 },
    {84 ,	3796 },
    {85 ,	3793 },
    {85 ,	3789 },
    {86 ,	3786 },
    {87 ,	3783 },
    {88 ,	3780 },
    {89 ,	3777 },
    {90 ,	3775 },
    {91 ,	3772 },
    {92 ,	3770 },
    {92 ,	3767 },
    {87 ,	3762 },
    {83 ,	3753 },
    {86 ,	3749 },
    {85 ,	3745 },
    {85 ,	3740 },
    {85 ,	3735 },
    {85 ,	3730 },
    {86 ,	3725 },
    {87 ,	3720 },
    {87 ,	3711 },
    {86 ,	3699 },
    {86 ,	3688 },
    {85 ,	3674 },
    {85 ,	3672 },
    {87 ,	3671 },
    {89 ,	3669 },
    {90 ,	3667 },
    {92 ,	3664 },
    {93 ,	3655 },
    {95 ,	3618 },
    {102,	3560 },
    {108,	3478 },
    {115,	3350 }
};

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0}
};

int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

//#define CONFIG_POWER_VERIFY
