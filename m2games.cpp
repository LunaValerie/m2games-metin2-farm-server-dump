AlcatrazCorporation > |------------------------------------|
AlcatrazCorporation > | @Dumper 2.5.6.9 > @Developer @Ezgi | 
AlcatrazCorporation > |------------------------------------|

|{Local Player}|
Local > m2games.bin+3757AC
Pointer > 0x0C
Phase > 0x1CDC
Attack Speed > 0x1C0C
Movement Speed > 0x1C08
Sword Range > 0x1C04
Quick Age > 0x1C00 
Coords Y > 0x1BDC
Coords X > 0x1BD8
Skill Hack > 0x1B94
Skill Speed > 0x1A98

|{Farm Bot v1}|
Attack Packet Assembly > m2games.bin+98316
VID Packet Assembly > m2games.libconfig::Config::getDefaultFormat+72E5

|{Farm Bot v2}|
Attack Packet > "m2games.bin"+003757EC > 0x68
VID Packet > "m2games.bin"+00377D10 > 0x38 > 0x50 > 0xD30

|{MiniMap}|
Zoom > 0xD97D2C > 0x10

|{Chat Color}|
Color 1 > 0xD98078 > 0x48
Color 2 > 0xD98078 > 0x4C
Color 3 > 0xD98078 > 0x50
Color 4 > 0xD98078 > 0x54

|{Send Battle Attack Packet Error}|
call > 0x00B1F7D0
mov > 0x00D97D20

|{GetTargetVID}|
mov > 0x0004436C
mov > 0x00D957EC

|{SendChatPacket}|
push > 0x00B15760

|{GetSkillCoolTime}|
push > 0x00ABB9F0