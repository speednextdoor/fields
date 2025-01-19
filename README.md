# setfield

this is not setfield i kinda capped and getfield

with getfield  although it cannot have a custom index so uhm  i didnt not focus on that xd

# ⚠

so this is not "setglobal" which you (skid) need to know the difference setglobal is a macro which already sets the index as lua_globalsindex i forgot but its smth near that range 

same goes for getfield, it also takes only 2 arguments which is the state, and the key. 

this works differently as it pushes the integer ONTO the stack, and the index cannot be changed.

you prolly use setfield like this

```
lua_setfield(l, -2, "hi")
```

the INDEX for this one does NOT exist, it will accept 3 arguments but the last one will always be null; after digging through roblox and doing homework on it this function works like setfield, but also pushes the integer

⚠ as the index is LOCKED to negative 2 you can only use this IN TABLES. better pray to god that you have _G for this bitch otherwise you would get "attempt to index" errors thrown by luau

tdlr; so yes you can use this for registering funcs or keys or anything rly
