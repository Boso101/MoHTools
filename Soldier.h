#include "Team.h"
#define SOLDIER_SIZE 0xA660



struct Soldier
{
  int Variables //0x00 Variable Pointer to health and stuff
  int unknownPointer1;
  int unkownPointer2;
  int unkownPointer3;
  int unkownPointer4;
  int unknown1;
  int unknown2;
  int unknown3;
  int unknown4;
  int unknownPointer5;
  int unknownPointer6;
  int unknown5;
  int unknown6;
  Team currentTeam; //0x1E // Just one byte
  
  
  
};
