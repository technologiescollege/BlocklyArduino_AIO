@echo off
echo **************************
echo Starting Blynk Server
echo **************************
cd /D %~dp0
cd ../jre8/bin
java -jar ../../Blynk/server.jar -dataFolder ../../Blynk/data