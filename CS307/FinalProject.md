# CS307 - Unix Programming Enviroment
## cmp\*
#### SYNOPSIS
`cmp [OPTION]... FILE1 [FILE2 [SKIP1 [SKIP2]]]`
#### Description
The command `cmp` checks for differences between files, **byte by byte**. This could be very useful if a file was giving you weird issues in a parser, but appeared the same as a file that works in a text editor.
#### Example 1
###### Byte comparison of two similiar `index.html` files.
```
$ cmp index.html cs350/index.html
index.html cs350/index.html differ: byte 20, line 3
```
#### Example 2
###### Byte comparison of two similiar `index.html` files, offset by *30 bytes*.
```
$ cmp index.html cs350/index.html 30 30
index.html cs350/index.html differ: byte 1, line 1
```
----
## diff\*
#### SYNOPSIS
`diff [OPTION]... FILES`
#### Description
The command `diff` checks for the differences between text of two files, **line by line**. It is very useful when dealing with multiple versions of a file.
#### Example 1
###### Comparing two versions of an `index.html` directory file.
```
$ diff www/CS350/index.html CS350/index.html
1,23c1,20
< <html>
< <head>
<     <link rel="stylesheet" href="/~davisb5/assets/css/normalize.css">
<     <link rel="stylesheet" href="/~davisb5/assets/css/skeleton.css">
<     <meta http-equiv="Content-Type" content="text/html">
<     <title>CS350 - Brodie Davis - SUNY POLY</title>
< </head>
< <body>
< 	<h1>CS350 Work - Brodie Davis</h1>
< 	<ul class="">
< 		<li><a href="http://web.cs.sunyit.edu/~davisb5/"> Parent Directory</a></li>
< 		<li><a href="http://web.cs.sunyit.edu/~davisb5/cs350/HW3.sql"> HW3.sql</a></li>
< 		<li><a href="http://web.cs.sunyit.edu/~davisb5/cs350/HW3.txt"> HW3.txt</a></li>
< 		<li><a href="http://web.cs.sunyit.edu/~davisb5/cs350/HW4.sql"> HW4.sql</a></li>
< 		<li><a href="http://web.cs.sunyit.edu/~davisb5/cs350/HW5.txt"> HW5.txt</a></li>
< 		<li><a href="http://web.cs.sunyit.edu/~davisb5/cs350/HW6.txt"> HW6.txt</a></li>
< 		<li><a href="http://web.cs.sunyit.edu/~davisb5/cs350/HW7.txt"> HW7.txt</a></li>
< 		<li><a href="http://web.cs.sunyit.edu/~davisb5/cs350/HW8.txt"> HW8.txt</a></li>
< 		<li><a href="http://web.cs.sunyit.edu/~davisb5/cs350/Mini-project%20Readme.html"> Mini-project Readme.html</a></li>
< 		<li><a href="http://web.cs.sunyit.edu/~davisb5/cs350/Mini-project/"> Mini-project/</a></li>
< 	</ul>
< </body>
< </html>
---
> <!DOCTYPE html PUBLIC "-//W3C//DTD HTML 3.2 Final//EN">
> <!-- saved from url=(0040)http://web.cs.sunyit.edu/~davisb5/cs350/ -->
> <html><head><meta http-equiv="Content-Type" content="text/html; charset=windows-1252">
>   <title>Index of /~davisb5/cs350</title>
>  </head>
>  <body>
> <h1>Index of /~davisb5/cs350</h1>
> <ul><li><a href="http://web.cs.sunyit.edu/~davisb5/"> Parent Directory</a></li>
> <li><a href="http://web.cs.sunyit.edu/~davisb5/cs350/HW3.sql"> HW3.sql</a></li>
> <li><a href="http://web.cs.sunyit.edu/~davisb5/cs350/HW3.txt"> HW3.txt</a></li>
> <li><a href="http://web.cs.sunyit.edu/~davisb5/cs350/HW4.sql"> HW4.sql</a></li>
> <li><a href="http://web.cs.sunyit.edu/~davisb5/cs350/HW5.txt"> HW5.txt</a></li>
> <li><a href="http://web.cs.sunyit.edu/~davisb5/cs350/HW6.txt"> HW6.txt</a></li>
> <li><a href="http://web.cs.sunyit.edu/~davisb5/cs350/HW7.txt"> HW7.txt</a></li>
> <li><a href="http://web.cs.sunyit.edu/~davisb5/cs350/HW8.txt"> HW8.txt</a></li>
> <li><a href="http://web.cs.sunyit.edu/~davisb5/cs350/Mini-project%20Readme.html"> Mini-project Readme.html</a></li>
> <li><a href="http://web.cs.sunyit.edu/~davisb5/cs350/Mini-project/"> Mini-project/</a></li>
> </ul>
>
> </body></html>
\ No newline at end of file
```
----
## comm\*
#### SYNOPSIS
`comm [OPTION]... FILE1 FILE2`
#### Description
The command `comm` compares two *sorted* files, and outputs the results in 3 columns. The data must already be sorted to be used with this function, which limits it's functionality. The first column is text that only the first file has, the second column is text that only the second column has, and the third column is text that both files contain.
#### Example 1
###### Comparing the output of running ```sudo arp |  awk '{print $1}' | sort > server-`hostname`.arp``` on two servers. The option `--output-delimiter='                  '` used to format the lists into a more readable form.
```
$ comm server-Debby.arp server-Orion.arp --output-delimiter='                  '
                                    10.128.128.128
                  150.156.208.1
150.156.208.139
                  150.156.208.161
                                    150.156.208.2
                  150.156.208.203
                                    150.156.209.193
150.156.209.203
                                    150.156.209.249
150.156.210.35
                  150.156.210.63
                                    150.156.211.21
                                    150.156.211.245
                                    150.156.211.248
                                    150.156.211.45
150.156.211.51
                                    150.156.212.123
150.156.212.179
150.156.212.21
                                    150.156.212.43
                                    150.156.212.59
                                    150.156.213.3
                  150.156.214.230
                                    150.156.215.58
                                    150.156.215.84

```
----
## calendar
#### SYNOPSIS
`calendar [-ab] [-A num] [-B num] [-l num] [-w num] [-f calendarfile] [-t [[[cc]yy]mm]dd]`
#### Description
Calendar is a 'reminder service' that will check the current directory, then the directory specified by the CALENDAR_DIR environment variable for a file named calendar. If it finds a calendar file, it will print out any lines starting with the current date or tomorrow's date.
#### Example 1
###### Using default calendar file.
```
$ calendar
May 02 	Dr. Benjamin Spock born, 1903
May 02 	King's Birthday in Lesotho
May 02*	Bank Holiday in UK
May 02*	May Day (NT)
.
.
.
May 03 	Bonne fête aux Jacques !
May 03 	Aujourd'hui, c'est la St(e) Philippe.
May 03 	Tímea, Irma
```
#### Example 2
###### Using custom calendar file to create personal reminders.
```
$ calendar
May 02 	CS240 Final Exam @  10:15
May 02 	CS220 Final Exam @  12:45
May 02 	CS350 Final Exam @  3:00
May 03 	CS307 Final Exam
May 03 	CS307 Command assignment due - Don't procastinate!
```
----
## leave
#### SYNOPSIS
`leave [[+]hhmm]`
#### Description
The command `leave` allows you to set a reminder that you need to leave or do something. After setting the time it should go off at, `leave` will print a message the terminal it was initialized from.
#### Example 1
###### Setting reminder for 1 min from current time. Reminders are included.
```
$ leave 2233
Alarm set for Mon May  2 22:33. (pid 5890)
...
You have to leave in 5 minutes.
...
Just one more minute!
...
Time to leave!
```
----
## split
#### SYNOPSIS
`split [OPTION]... [INPUT [PREFIX]]`
#### Description
The command `split` will split a file into pieces based on a defined file size or number of lines. The split files will be named PREFIXaa, PREFIXab, and so on until the file has been completely split up. This would be useful for large log files or for breaking a large chunk of data to be transfered into smaller pieces.
#### Example 1
###### Splitting the deamon log at location `/var/log/daemon.log` into smaller files with the prefix DeamonLOG.
```
$ sudo split /var/log/daemon.log DeamonLOG
bdavis@Orion: ~/Documents/SUNYPOLY/CS307/log
$ ls
DeamonLOGaa  DeamonLOGaz  DeamonLOGby  DeamonLOGcx  DeamonLOGdw  DeamonLOGev  DeamonLOGfu  DeamonLOGgt  DeamonLOGhs  DeamonLOGir  DeamonLOGjq  DeamonLOGkp  DeamonLOGlo
DeamonLOGab  DeamonLOGba  DeamonLOGbz  DeamonLOGcy  DeamonLOGdx  DeamonLOGew  DeamonLOGfv  DeamonLOGgu  DeamonLOGht  DeamonLOGis  DeamonLOGjr  DeamonLOGkq  DeamonLOGlp
DeamonLOGac  DeamonLOGbb  DeamonLOGca  DeamonLOGcz  DeamonLOGdy  DeamonLOGex  DeamonLOGfw  DeamonLOGgv  DeamonLOGhu  DeamonLOGit  DeamonLOGjs  DeamonLOGkr  DeamonLOGlq
DeamonLOGad  DeamonLOGbc  DeamonLOGcb  DeamonLOGda  DeamonLOGdz  DeamonLOGey  DeamonLOGfx  DeamonLOGgw  DeamonLOGhv  DeamonLOGiu  DeamonLOGjt  DeamonLOGks  DeamonLOGlr
DeamonLOGae  DeamonLOGbd  DeamonLOGcc  DeamonLOGdb  DeamonLOGea  DeamonLOGez  DeamonLOGfy  DeamonLOGgx  DeamonLOGhw  DeamonLOGiv  DeamonLOGju  DeamonLOGkt  DeamonLOGls
DeamonLOGaf  DeamonLOGbe  DeamonLOGcd  DeamonLOGdc  DeamonLOGeb  DeamonLOGfa  DeamonLOGfz  DeamonLOGgy  DeamonLOGhx  DeamonLOGiw  DeamonLOGjv  DeamonLOGku  DeamonLOGlt
DeamonLOGag  DeamonLOGbf  DeamonLOGce  DeamonLOGdd  DeamonLOGec  DeamonLOGfb  DeamonLOGga  DeamonLOGgz  DeamonLOGhy  DeamonLOGix  DeamonLOGjw  DeamonLOGkv  DeamonLOGlu
DeamonLOGah  DeamonLOGbg  DeamonLOGcf  DeamonLOGde  DeamonLOGed  DeamonLOGfc  DeamonLOGgb  DeamonLOGha  DeamonLOGhz  DeamonLOGiy  DeamonLOGjx  DeamonLOGkw  DeamonLOGlv
DeamonLOGai  DeamonLOGbh  DeamonLOGcg  DeamonLOGdf  DeamonLOGee  DeamonLOGfd  DeamonLOGgc  DeamonLOGhb  DeamonLOGia  DeamonLOGiz  DeamonLOGjy  DeamonLOGkx  DeamonLOGlw
DeamonLOGaj  DeamonLOGbi  DeamonLOGch  DeamonLOGdg  DeamonLOGef  DeamonLOGfe  DeamonLOGgd  DeamonLOGhc  DeamonLOGib  DeamonLOGja  DeamonLOGjz  DeamonLOGky  DeamonLOGlx
DeamonLOGak  DeamonLOGbj  DeamonLOGci  DeamonLOGdh  DeamonLOGeg  DeamonLOGff  DeamonLOGge  DeamonLOGhd  DeamonLOGic  DeamonLOGjb  DeamonLOGka  DeamonLOGkz  DeamonLOGly
DeamonLOGal  DeamonLOGbk  DeamonLOGcj  DeamonLOGdi  DeamonLOGeh  DeamonLOGfg  DeamonLOGgf  DeamonLOGhe  DeamonLOGid  DeamonLOGjc  DeamonLOGkb  DeamonLOGla  DeamonLOGlz
DeamonLOGam  DeamonLOGbl  DeamonLOGck  DeamonLOGdj  DeamonLOGei  DeamonLOGfh  DeamonLOGgg  DeamonLOGhf  DeamonLOGie  DeamonLOGjd  DeamonLOGkc  DeamonLOGlb  DeamonLOGma
DeamonLOGan  DeamonLOGbm  DeamonLOGcl  DeamonLOGdk  DeamonLOGej  DeamonLOGfi  DeamonLOGgh  DeamonLOGhg  DeamonLOGif  DeamonLOGje  DeamonLOGkd  DeamonLOGlc  DeamonLOGmb
DeamonLOGao  DeamonLOGbn  DeamonLOGcm  DeamonLOGdl  DeamonLOGek  DeamonLOGfj  DeamonLOGgi  DeamonLOGhh  DeamonLOGig  DeamonLOGjf  DeamonLOGke  DeamonLOGld  DeamonLOGmc
DeamonLOGap  DeamonLOGbo  DeamonLOGcn  DeamonLOGdm  DeamonLOGel  DeamonLOGfk  DeamonLOGgj  DeamonLOGhi  DeamonLOGih  DeamonLOGjg  DeamonLOGkf  DeamonLOGle  DeamonLOGmd
DeamonLOGaq  DeamonLOGbp  DeamonLOGco  DeamonLOGdn  DeamonLOGem  DeamonLOGfl  DeamonLOGgk  DeamonLOGhj  DeamonLOGii  DeamonLOGjh  DeamonLOGkg  DeamonLOGlf  DeamonLOGme
DeamonLOGar  DeamonLOGbq  DeamonLOGcp  DeamonLOGdo  DeamonLOGen  DeamonLOGfm  DeamonLOGgl  DeamonLOGhk  DeamonLOGij  DeamonLOGji  DeamonLOGkh  DeamonLOGlg  DeamonLOGmf
DeamonLOGas  DeamonLOGbr  DeamonLOGcq  DeamonLOGdp  DeamonLOGeo  DeamonLOGfn  DeamonLOGgm  DeamonLOGhl  DeamonLOGik  DeamonLOGjj  DeamonLOGki  DeamonLOGlh  DeamonLOGmg
DeamonLOGat  DeamonLOGbs  DeamonLOGcr  DeamonLOGdq  DeamonLOGep  DeamonLOGfo  DeamonLOGgn  DeamonLOGhm  DeamonLOGil  DeamonLOGjk  DeamonLOGkj  DeamonLOGli  DeamonLOGmh
DeamonLOGau  DeamonLOGbt  DeamonLOGcs  DeamonLOGdr  DeamonLOGeq  DeamonLOGfp  DeamonLOGgo  DeamonLOGhn  DeamonLOGim  DeamonLOGjl  DeamonLOGkk  DeamonLOGlj  DeamonLOGmi
DeamonLOGav  DeamonLOGbu  DeamonLOGct  DeamonLOGds  DeamonLOGer  DeamonLOGfq  DeamonLOGgp  DeamonLOGho  DeamonLOGin  DeamonLOGjm  DeamonLOGkl  DeamonLOGlk  DeamonLOGmj
DeamonLOGaw  DeamonLOGbv  DeamonLOGcu  DeamonLOGdt  DeamonLOGes  DeamonLOGfr  DeamonLOGgq  DeamonLOGhp  DeamonLOGio  DeamonLOGjn  DeamonLOGkm  DeamonLOGll  DeamonLOGmk
DeamonLOGax  DeamonLOGbw  DeamonLOGcv  DeamonLOGdu  DeamonLOGet  DeamonLOGfs  DeamonLOGgr  DeamonLOGhq  DeamonLOGip  DeamonLOGjo  DeamonLOGkn  DeamonLOGlm
DeamonLOGay  DeamonLOGbx  DeamonLOGcw  DeamonLOGdv  DeamonLOGeu  DeamonLOGft  DeamonLOGgs  DeamonLOGhr  DeamonLOGiq  DeamonLOGjp  DeamonLOGko  DeamonLOGln
```
----
## paste
#### SYNOPSIS
`paste [OPTION]... [FILE]...`
#### Description
The command `paste` will print the contents of all the files given as arguments next to each other, separated by a tab character.
#### Example 1
###### Here we print out the two sorted files we used earlier with `comm`, but using paste.
```
$ paste server-Debby.arp server-Orion.arp
10.128.128.128	10.128.128.128
150.156.208.139	150.156.208.1
150.156.208.2	150.156.208.161
150.156.209.193	150.156.208.2
150.156.209.203	150.156.208.203
150.156.209.249	150.156.209.193
150.156.210.35	150.156.209.249
150.156.211.21	150.156.210.63
150.156.211.245	150.156.211.21
150.156.211.248	150.156.211.245
150.156.211.45	150.156.211.248
150.156.211.51	150.156.211.45
150.156.212.123	150.156.212.123
150.156.212.179	150.156.212.43
150.156.212.21	150.156.212.59
150.156.212.43	150.156.213.3
150.156.212.59	150.156.214.230
150.156.213.3	150.156.215.58
150.156.215.58	150.156.215.84
```
----
## cut\*
#### SYNOPSIS
`cut OPTION... [FILE]...`
#### Description
The command `cut` can remove or display only a set of characters, fields or bytes from an output stream.
#### Example 1
Using cut in place of `awk` in a command used earlier to get only the IP list from an `arp` command on a server.
```
$ sudo arp | cut -f 1-2 -d ' '
10.128.128.128
150.156.208.139
150.156.208.2
150.156.209.193
150.156.209.203
150.156.209.249
150.156.210.35
150.156.211.21
150.156.211.245
150.156.211.248
150.156.211.45
150.156.211.51
150.156.212.123
150.156.212.179
150.156.212.21
150.156.212.43
150.156.212.59
150.156.213.3
150.156.214.230
150.156.215.84
```
----
## units
#### SYNOPSIS
`'units' [options] [from-unit [to-unit]]`
#### Description
The command `units` is a versatile conversion tool that can convert a wide range of units to other relevant units. It can be used interactively or with command line arguments.
#### Example 1
###### Interactively converting 35 feet to meters
```
$ units
Currency exchange rates from www.timegenie.com on 2014-04-02
2866 units, 109 prefixes, 79 nonlinear units

You have: 35 feet
You want: meter
	* 10.668
	/ 0.093738283
```
#### Example 2
###### Converting 35 feet to meters, non-interactively (from the CLI).
```
$ units '35 feet' 'meter'
	* 10.668
	/ 0.093738283
```
#### Example 3
###### An example of how `units` might be used in a `bash` script
```
$ CONTAINER_SIZE_FEET=`getContainerSize`
$ CONTAINER_SIZE_METER=`units "$CONTAINER_SIZE_FEET feet" meters | cut -f 2 -d ' ' | head -n 1`
$ echo $CONTAINER_SIZE_METER
10.668
```
----
## find\*
#### SYNOPSIS
`find [-H] [-L] [-P] [-D debugopts] [-Olevel] [path...] [expression]`
#### Description
The command `find` looks through a given directory and looks for files matching an expression or other constraints defined by arguments to the command.
#### Example 1
###### Using `find` to locate a file named apache2.conf in the `/etc` directory using the `-name` parameter.
```
$ sudo find /etc -name 'apache2.conf'
/etc/apache2/apache2.conf
```
----
## bc
#### SYNOPSIS
`bc [ -hlwsqv ] [long-options] [  file ... ]`
#### Description
The command `bc` in an interface to use 'An arbitrary precision calculator language'
#### Example 1
###### Interactively doing some random operations
```
$ bc
bc 1.06.95
Copyright 1991-1994, 1997, 1998, 2000, 2004, 2006 Free Software Foundation, Inc.
This is free software with ABSOLUTELY NO WARRANTY.
For details type `warranty'.
5+5
10
8+8
16
8*8
64
8^8
16777216
```
#### Example 2
###### Running the same meaningless operations from a file, rather than interactively.
```
$ cat bc-test-file
5+5
8+8
8*8
8^8
bdavis@Orion: ~/Documents/SUNYPOLY/CS307
$ bc bc-test-file
bc 1.06.95
Copyright 1991-1994, 1997, 1998, 2000, 2004, 2006 Free Software Foundation, Inc.
This is free software with ABSOLUTELY NO WARRANTY.
For details type `warranty'.
10
16
64
16777216
```
----
## sort\*
#### SYNOPSIS
```
sort [OPTION]... [FILE]...
sort [OPTION]... --files0-from=F
```
#### Description
The command `sort` can sort the contents of a file by large number of different ordering techniques. It outputs to the terminal by default, but can be redirected using `>` or `>>`, piped into another command using `|`, or given an output file via the `-o` parameter.
#### Example 1
###### This command gets the IP address's from `arp table` on a server and sorts the IP's. (The `cat` command prints out the file that contains the results of`sort`.)
```
sudo arp |  awk '{print $1}' | sort > server-`hostname`.arp
$ cat server-Orion.arp
10.128.128.128
150.156.208.1
150.156.208.103
150.156.208.139
150.156.208.161
150.156.208.2
150.156.208.203
150.156.209.193
150.156.209.203
150.156.209.249
150.156.210.35
150.156.210.63
150.156.211.118
150.156.211.21
150.156.211.245
150.156.211.248
150.156.211.45
150.156.211.51
150.156.211.82
150.156.212.123
150.156.212.179
150.156.212.21
150.156.212.43
150.156.212.59
150.156.213.150
150.156.213.3
150.156.214.11
150.156.214.230
150.156.215.58
150.156.215.84
```
#### Example 2
###### This command gets the IP address's from `arp table` on a server and sorts the IP's. This example uses the `-o` parameter instead of a redirect. (The `cat` command prints out the file that contains the results of`sort`.)
```
sudo arp |  awk '{print $1}' | sort -o server-`hostname`.arp
$ cat server-Orion.arp
10.128.128.128
150.156.208.1
150.156.208.103
150.156.208.139
150.156.208.161
150.156.208.2
150.156.208.203
150.156.209.193
150.156.209.203
150.156.209.249
150.156.210.35
150.156.210.63
150.156.211.118
150.156.211.21
150.156.211.245
150.156.211.248
150.156.211.45
150.156.211.51
150.156.211.82
150.156.212.123
150.156.212.179
150.156.212.21
150.156.212.43
150.156.212.59
150.156.213.150
150.156.213.3
150.156.214.11
150.156.214.230
150.156.215.58
150.156.215.84
```
