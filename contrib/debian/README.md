
Debian
====================
This directory contains files used to package WBTCd/WBTC-qt
for Debian-based Linux systems. If you compile WBTCd/WBTC-qt yourself, there are some useful files here.

## WBTC: URI support ##


WBTC-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install WBTC-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your WBTCqt binary to `/usr/bin`
and the `../../share/pixmaps/WBTC128.png` to `/usr/share/pixmaps`

WBTC-qt.protocol (KDE)

