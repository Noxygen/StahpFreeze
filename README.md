# StahpFreeze
Unreal Engine plugin that lowers the process priority of the editor.

The plugin automatically sets the editor process priority to **Below Normal** upon every start. The final game build is **not** affected.

## Usage
Throw StahpFreeze folder into your engine's plugin directory and enable it in the editor's plugin settings. 

## Compatibility
Tested on 4.24 but should work for pretty much any 4.x version. Check the releases tab for a ready-to-use compiled version. 