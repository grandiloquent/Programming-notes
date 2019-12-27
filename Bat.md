# Bat

## aria2c

```bat
aria2c --https-proxy="https://127.0.0.1:49758" -c https://github.com/spacehuhn/esp8266_deauther/releases/download/v2.1.0/deauther_2.1.0_1mb.bin
```

## dir

```javascript
dir /b /a-d>files.txt
dir /s /b /o:gn
dir /s /b /a-d /o:gn
```

## ebook-convert

```bat
for /r %i in (*.*) do "C:\Calibre Portable\Calibre\ebook-convert.exe" "%i" "%~ni.epub"
for /r %i in (*.epub) do "C:\Calibre Portable\Calibre\ebook-convert.exe" "%i" "%~ni.azw3"
```

## ffmpeg

```bat
for f in *.m4a; do ffmpeg -i "$f" -codec:v copy -codec:a libmp3lame -q:a 2 newfiles/"${f%.m4a}.mp3"; done
ffmpeg -i input.mp3 -codec:a libmp3lame -b:a 128k output.mp3
for %a in (*.m4a) do ffmpeg -i "%~a" -codec:v copy -codec:a libmp3lame -q:a 2 "%~na.mp3"
for %a in (*.*) do ffmpeg -i "%~a" -codec:a libmp3lame -b:a 128k "128_%~na.mp3"

```

## mkdir

```bat
mkdir newfiles
```

## regsvr32

```bat
regsvr32 %windir%\system32\libgcc_s_seh-1.dll /s
```

## ren

```bat
for %a in (*.*) do ren "%~a" "mobile_adapters_details_%~na%~xa"
```

## rm

```bat
rm -rf "C:\Users\psycho\Desktop\Recycle" && mkdir "C:\Users\psycho\Desktop\Recycle"
```

## robocopy

```bat
robocopy "C:\Users\psycho\Desktop\C" "C:\NULL" /E /L /NJH /NJS /FP /NS /NC /B /XJ
```

## tree

```bat
tree /f
``` 

