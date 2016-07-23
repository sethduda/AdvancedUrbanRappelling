# Advanced Urban Rappelling

Created by Duda w/ custom animations by Mcruppert

**Features:**

 - Rappel of anything that's more than 4-5m high. This includes buildings, cliff, towers, etc. Everything works as long a you can walk to an edge.
 - Fire while rappelling! You can switch between your rifle and pistol while rappelling.
 - Custom animations and sounds
 - Supports swinging side to side, pushing off wall, and climbing back to the top.
 - Supports rappelling AI units.
 - Can be installed as server-side only addon. However, clients without the addon won't be able to shoot while rappelling and won't see custom animations and sounds. Still looks great though!
 - SP and MP compatible.

**Directions:**

Walk to any edge that's 4-5m high. Using your action menu, either rappel yourself or your AI units.

Once rappelling, here's what you can do:

 - Move down rope (use move backwards key: s)
 - Move up rope (use move forwards key: w)
 - Wall walk left (use move left key: a) - must be facing & against surface to walk.
 - Wall walk right (use move right key: d) - must be facing & against surface to walk.
 - Push off wall (use sprint key: left shift) - must be facing & against surface to push off.
 - Push off wall more (hold down sprint key & release: left shift) - must be facing & against surface to push off.
 - Take out weapon (use fire: left mouse click or raise weapon key: left ctrl twice)
 - Lower weapon (use lower weapon key: left ctrl twice)
 - Switch weapon (use your action menu to select rifle or pistol)
 - Climb back to top (move up rope to the top, and then use action menu)
 - Detach from rope (use action menu)

There are a few ways to rappel AI units:

 - Option 1: With you AI units nearby, walk to an edge and press Rappel AI Units. All nearby AI in your group will rappel down 3 evenly spaced ropes.
 - Option 2: After you start rappelling, you can use the Rappel AI Units action. All AI near your rappel anchor point will rappel in the same position.
 - Option 3: After you finish rappelling, you can use the Rappel AI Units action. All AI near your last used rappel anchor point will rappel in the same position.
 
**Installation:**

 1. Subscribe via steam: http://steamcommunity.com/sharedfiles/filedetails/?id=713709341 or download latest release from https://github.com/sethduda/AdvancedUrbanRappelling/releases
 2. If installing this on a server, add the addon to the -serverMod command line option. It's required on the server side and is optional for clients. It's recommended to put the addon's key in your server's key directory so clients can optionally enable the addon. If clients have the addon enabled, they'll be able to shoot while rappelling and will have custom animations and sounds.

**Notes for Mission Makers:**

If you want to script AI to rappel, you can use the AUR_Rappel_Unit function. Place the unit next to the edge they should rappel.

Then, via scripting (e.g. using trigger activation) call this function:

```
[UNIT] spawn AUR_Rappel_Unit;
```

Params: UNIT = The unit that should rappel

The unit will then rappel down the edge on a 60m rope.

If you want more control, you can use the optional parameters:

```
[UNIT, ANCHOR_POSITION, RAPPEL_DIRECTION, ROPE_LENGTH] spawn AUR_Rappel_Unit;
```

Params:

ANCHOR_POSITION = Position ASL where the rope should attach.
RAPPEL_DIRECTION = Unit vector direction that the unit should jump off when starting rappelling (e.g away from the building). If the unit is facing the direction they should jump off, you can get this via the command vectorDir UNIT.
ROPE_LENGTH = Rope length in meters (defaults to 60)

**Not working on your server?**

Make sure you have the mod listed in the -mod or -serverMod command line option. Only -serverMod is required for this addon. If still not working, check your server log to make sure the addon is found. 

**FAQ**

*This addon is only required on the server - is it going to slow down my server?*

No - while this addon is server-side only, it installs itself on all clients without them downloading the addon. Most of the time, the rappelling code actually runs client-side, even though you installed the addon only on the server. Magic! 

*Battleye kicks me when I try to do xyz. What do I do?*

You need to configure Battleye rules on your server. Below are the files you need to configure: 

setvariable.txt 

Add the following exclusions to the end of all lines starting with 4, 5, 6, or 7 if they contain "" (meaning applies to all values): 

!"AUR_"

setvariableval.txt 

If you have any lines starting with 4, 5, 6, or 7 and they contain "" (meaning applies to all values) it's not going to work. Either remove the line or explicitly define the values you want to kick. Since the values of the variables above can vary, I don't know of a good way to define an exclusion rule. 

Also, it's possible there are other battleye filter files that can cause issues. If you check your battleye logs you can figure out which file is causing a problem.

*The rappelling action appears while in a heli, but do nothing when I select them. How do I fix that?*

Most likely your server is setup with a white list for remote executions. In order to fix this, you need to modify your mission's description.ext file, adding the following CfgRemoteExec rules. If using InfiStar you should edit your cfgremoteexec.hpp instead of the description.ext file. See https://community.bistudio.com/wiki/Arma_3_Remote_Execution for more details on CfgRemoteExec.
	
```
class CfgRemoteExec
{
	class Functions
	{
		class AUR_Hint { allowedTargets=1; }; 
		class AUR_Hide_Object_Global { allowedTargets=2; }; 
		class AUR_Enable_Rappelling_Animation_Global { allowedTargets=2; }; 
		class AUR_Play_Rappelling_Sounds_Global { allowedTargets=2; }; 
	};
};
```

**Issues & Feature Requests**

https://github.com/sethduda/AdvancedUrbanRappelling/issues 

If anyone wants to help fix any of these, please let me know. You can fork the repo and create a pull request. 

**Special Thanks for Testing & Support:**

- Mcruppert for the custom animations
- Mynock for custom rappelling sounds
- Jeza for the videos and screen shots
- Stay Alive Tactical Team (http://sa.clanservers.com)
- The MANY people from BIS forums that have helped test this!

---

The MIT License (MIT)

Copyright (c) 2016 Seth Duda

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
