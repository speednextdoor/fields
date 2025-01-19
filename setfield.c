// hi, if you did not read the README.md i will explain this skid
// this is NOT setfield, it works like setfield, but only on tables that are gaven to the stack and uh also pushes an integer too 
// this will require 3 arguments but the last one is always null, unless you actually want to push something then you can put any range

// DEFINED AS static void

DWORD64 setfield_addy = 0; // make sure to put ur rebasing function here 

using setfieldfake  = void(__fastcall*)(lua_State* L, const char* key, int value); 
setfieldfake lua_setfield = reinterpret_cast<setfieldfake>(setfield_addy);

// people who dont cast to lua state here ya go even tho it takes 3 seconds to change the struct luastate to your type :skull:
using setfieldrbx  = void(__fastcall*)(DWORD64 L, const char* key, int value); 
setfieldrbx r_setfield = reinterpret_cast<setfieldrbx>(setfield_addy);

int testthingie(lua_State* state){
  lua_setfield(state, "func", NULL);
};
