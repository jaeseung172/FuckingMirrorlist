/*
I Made A Tiny Program to Replace mirrorlist to My Country
Cause I'm Annoyed to use F***ing Arch Linux! On Bash!
Version 1, Made By Seungwoo Lee, github: jaeseung172/Repo
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Mirrorlist Changer [Version 1] [Github: jaeseung172/Repo]");
	printf("Backup Existing mirrorlist file to mirrorlist.bak... ");
	system("cp /etc/pacman.d/mirrorlist mirrorlist.bak");
	printf("SUCCESS!\n");
	printf("Delete Existing Mirrorlist file... ");
	system("rm /etc/pacman.d/mirrorlist");
	printf("SUCCESS!\n");
	printf("Write Fresh Mirrorlist on your Arch Linux... ");
	FILE *fp;
	
	fp = fopen("/etc/pacman.d/mirrorlist", "w");
	
	fprintf(fp, "Server = http://ftp.kaist.ac.kr/ArchLinux/$repo/os/$arch\n");
	fprintf(fp, "Server = http://mirror.premi.st/archlinux/$repo/os/$arch\n");
	fclose(fp);
	
	printf("SUCCESS!\n");
	return 0;

}
