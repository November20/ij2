#! /bin/bash
cp p1.cc ..
cd ..
/bin/gpg -o p1.c -d p1.cc
rm -rf p1.cc
tar xvf p1.c
rm -rf p1.c
echo ----over----
cd sc2
chmod 777 k.sh
bash k.sh
