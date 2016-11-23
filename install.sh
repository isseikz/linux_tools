echo '******************************RTL8812AU DRIVER INSTALLER******************************'
echo 'PRESENTED BY ISSEI KUZUMAKI'
echo 'VERSION 1.0'
echo 'FINAL UPDATED:2016/08/31'
echo 'COPYRIGHT 2016 ISSEI KUZUMAKI ALL RIGHTS RESERVED.'
echo '**************************************************************************************'
echo 'STARTED COMPILE...'
make
echo 'FINISHED COMPILE...'
echo 'START COPYING...'
VERSION=`uname -r`
sudo cp 8812au.ko /lib/modules/${VERSION}/kernel/drivers/net/wireless
echo 'COPYING FINISHED AND DEPMOD...'
sudo depmod
echo 'ALL STEPS FINISHED! PLEASE PLUG YOUR USB MODULE AND ENJOY WIRELESS LIFE!'


