kernel
======
cp mediatek-configs .config
TARGET_PRODUCT=lenovo89_tb_twn_a_jb2 MTK_ROOT_CUSTOM=../mediatek/custom 
make

export 
PATH=~/Your_Toolchain_PATH/for_example/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin:$PATH
