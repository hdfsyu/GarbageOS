# GarbageOS
~~An os which is trash under development so nothing here rn (yes ik im very active on github)~~

I am still not done but the tutorials arent getting updated rn so I have to wait until codepulse updates his tutorial...
# Installing
Get qemu from qemu.org or something also get docker.
Once u installed docker and qemu type this command in the root of the project: `docker run --rm -it -v "%cd%":/root/env myos-buildenv` if ur on powershell: `docker run --rm -it -v "${pwd}:/root/env" myos-buildenv` and if ur on linux or macos: `docker run --rm -it -v "$pwd":/root/env myos-buildenv`
Now type `make build-x86_64` Now the final command: `qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso` That will run the OS.
# Real Hardware
THIS HAS NEVER BEEN TESTED. REAL HARDWARE MIGHT NOT WORK. AND UR PC MIGHT CRASH. BURN THE ISO TO A USB AND BOOT OFF THE USB. IF IT WORKED TELL ME ON PULL REQUESTS
# Pull Requests
yes. Btw ur not allowed to edit anything without my permissions. **bai**
