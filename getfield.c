// getfield
// no index, only you can choose key as argument and lua state
// if ur a skid and dont know what im saying its getfield limited but with more functionality at same time lmao

// make sure to rebase
typedef int(__fastcall* lua_getfield_t)(lua_State* L, const char* key, int d); //  change first arg to howeever u get luastate and store it
lua_getfield_t lua_getfield = (rgetfield)0x2303D70; // updated as of 1/18/2025 its in loslib

// now you can use it by returning things from properties like
int shit = lua_getfield(L, "Gravity", -1);
// u cant js paste my code above, u need to put it in a func and use the stack correctly but this js an example
