@ECHO OFF
SETLOCAL EnableExtensions
set EXE=YukiNagatoEscPro.exe
:START
FOR /F %%x IN ('tasklist /NH /FI "IMAGENAME eq %EXE%"') DO IF %%x == %EXE% goto FOUND
goto FIN
:FOUND
goto START
:FIN
del YukiNagatoEscPro.exe
del invisible.vbs
(goto) 2>nul & del "%~f0"