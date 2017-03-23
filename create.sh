#!/bin/bash


if [ $# -eq 0 ]; then
    echo "请输入要创建的题号"
    exit -1
fi


#fullName=`echo $1 | awk '{printf "%04d", $0}'`
#str='s/\"S\.h\" \/\* '$fullName'/\"S'$1'\.h\" \/\* '$fullName'/'
#echo $str
#sed -i "$str" main.cpp 


file=S$1

hfile=$file.h
cfile=$file.cpp

if [  -e $hfile ]; then
    echo " $hfile 文件已经存在"
    exit -1
fi

if [  -e $cfile ]; then
    echo "  $cfile 文件已经存在"
fi

touch $hfile
touch $cfile


echo "#ifndef __"$file"_H" >> $hfile
echo "#define __"$file"_H 1" >> $hfile
echo "" >> $hfile
echo "namespace $file {" >> $hfile
echo "" >> $hfile
echo "int main(int argc, char *argv[]);" >> $hfile
echo "" >> $hfile
echo "};" >> $hfile
echo "" >> $hfile
echo "#endif" >> $hfile
echo "" >> $hfile


echo "" >> $cfile
echo "#include \""$hfile"\"" >> $cfile
echo "#include <vector>" >> $cfile
echo "#include <algorithm>" >> $cfile
echo "#include <iostream>" >> $cfile
echo "" >> $cfile
echo "using namespace std;" >> $cfile
echo "" >> $cfile
echo "namespace "$file" {" >> $cfile
echo "" >> $cfile
echo "class Solution {" >> $cfile
echo "public: " >> $cfile
echo "" >> $cfile
echo "};" >> $cfile
echo "" >> $cfile
echo "int main(int argc, char *argv[]) {" >> $cfile
echo "    cout << \"Question "$1" is created\" << endl;" >> $cfile
echo "" >> $cfile
echo "    Solution so;" >> $cfile
echo "" >> $cfile
echo "    return 0;" >> $cfile
echo "}" >> $cfile
echo "" >> $cfile
echo "};" >> $cfile










