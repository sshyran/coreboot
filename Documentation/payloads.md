# Payloads

coreboot doesn't try to mandate how the boot process should look, it merely
does hardware init and then passes on control to another piece of software
that we carry along in firmware storage, the _payload_.

There is various software in that space that is either explicitly written as
payload or can be made to work as one.

## SeaBIOS

[SeaBIOS](https://www.seabios.org) is an open source implementation of
the PCBIOS API that exists since the original IBM PC and was extended
since. While originally written for emulators such as QEMU, it can be made
to work as a coreboot payload and all the necessary code is in SeaBIOS'
mainline code, or as a secondary payload load by another payload, e.g. it
can be loaded from GRUB2 with the following menuentry in the run time
config of GRUB2:

    menuentry "SeaBIOS" --unrestricted {
        root=(cbfsdisk)
        multiboot /img/seabios
        module /vgaroms/seavgabios.bin
    }

## Tianocore

[Tianocore](https://www.tianocore.org) is the open source reference
implementation of the UEFI Specifications that modern firmware for PCs is
based on. There were various projects in the past to make it suitable as a
coreboot payload, but these days this function is available directly in the
UefiPayloadPkg part of its source tree.

## GRUB2

GRUB2 was originally written as a bootloader and that's its most popular
purpose, but it can also be compiled as a coreboot payload.

## Linux

There are several projects using Linux as a payload (which was the
configuration that gave coreboot its original name, LinuxBIOS). That kernel is
often rather small and serves to load a current kernel from somewhere, e.g.
disk or network, and run that through the kexec mechanism.

Two aspects emphasized by proponents of Linux-as-a-payload are the
availability of well-tested, battle-hardened drivers (as compared to
firmware project drivers that often reinvent the wheel) and the ability to
define boot policy with familiar tools, no matter if those are shell scripts
or compiled userland programs written in C, Go or other programming languages.

## Heads

[Heads] is a distribution that bundles coreboot, Linux, busybox and custom
tools to provide reproducible ROMs. [Heads] aims to provide a secure and
flexible boot environment for laptops and servers.
It supports features like measured boot, kexec, GPG, OTP, TLS, firmware
updates, but only works on a limited amount of mainboards.
For more details have a look at [heads-wiki].

[Heads]: https://github.com/osresearch/heads
[heads-wiki]: http://osresearch.net/
