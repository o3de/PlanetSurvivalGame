# Planet Survival Game - Proof of concept Point and Click Turn Based Strategy Game

# By Starr Shaw

Project Or Game Description:

Planet Survival Game is a Proof of concept Point and Click Turn Based Strategy Game. We start by landing on planet environment tile, with limited fuel, our first mission is to recharge are ship with locating a natural power on the planet in the form of Power Crystals. The Local residence of this area might not like this and attempt to stop this energy collection grab. We must explore the planet and find resources. The Planet is made of of procedural crafted squares with a variety of enemy encounters, puzzles, and task to preform. If you run out of power completely, or attack and loose an enemy fight, the game ends.

https://user-images.githubusercontent.com/87207603/201387109-4a65bdb9-7f70-43f3-8ab0-f47d8416ba1f.mp4

## The Project Includes

![GamePlay](https://user-images.githubusercontent.com/87207603/201390591-a88dd221-f9d2-4046-9a25-2d4b92052924.gif)

- **Planet environment**, includes Many Size Rocks, Plants, Lava Spouts and Main Playing Island Grid.
- **Alien Explorer**, a ready to use character model, with multiple character animations such as, wal and attack. Is modular with Many Skin Attachments.
- **AI Player**, The Buggy AI Character will use the Nav Mesh to seek and move toward your Clayer character.
- **Script Canvas Visual Scripts,** editable Script Canvas visual scripts for main and in game menu interaction, gameplay and player movement.

- Main Player

![Main_Char](https://user-images.githubusercontent.com/87207603/201388588-d6bc5874-3e3e-4724-b8cc-e50b0fb8921b.gif)

- In-Game Screen Shot 1
![image(2)](https://user-images.githubusercontent.com/87207603/201387806-88ade873-1bbf-4f7a-a2d1-c1fad25cc6c1.png)
- In-Game Screen Shot 2
![image(3)](https://user-images.githubusercontent.com/87207603/201387824-baa998fa-1bd3-467f-9fc2-d170633ed1f1.png)
- In-Game Screen Shot 3
![image(6)](https://user-images.githubusercontent.com/87207603/201387893-7b570b7e-ccb6-45d5-a016-51e2ec35d233.png)


https://user-images.githubusercontent.com/87207603/201387317-6cfdab7f-df73-40d4-98ed-80b477a3d8bb.mp4


## Build Levels Dynamically
Build dynamic levels with O3DE Vegetation System

https://user-images.githubusercontent.com/87207603/201395614-0cf91fd3-a144-44f2-90f2-0d5e771826d2.mp4

## Game Levels

- **Main**, a start level and main gameplay level for a full game loop.

## Requirements

### Platforms

The project supports the following platforms:

- **Windows 10 version 1809 (10.0.17763)** or later is required.

## O3DE Installation

1. Refer to the [O3DE System Requirements](https://www.o3de.org/docs/welcome-guide/requirements/) documentation to make sure that the system/hardware requirements are met.
2. Please follow the instructions to [set up O3DE from GitHub](https://o3de.org/docs/welcome-guide/setup/setup-from-github/).
3. **Use the development branch**: git checkout development.

# Building the project

## Build Steps

1. Clone the PlanetSurvivalGame game project from the following repo:
   1. git clone https://github.com/o3de/PlanetSurvivalGame
2. Within the Project manager locate and click on the **New Project** button. Then from the drop down menu select the **Open Existing Project** option.
3. Once Windows Explorer opens, navigate to and select the **Planet_Survival_Game** folder. Once selected click on the **Select Folder** button.
4. This will load the **Planet_Survival_Game** project into the **Project Manager**.
![image](https://user-images.githubusercontent.com/87207603/201396468-0a13c0f8-8028-4121-bc4b-f4a36cf6c780.png)
6. In order to build the project, locate and click on the **Build Project** button, located on the **Planet_Survival_Game** icon.


## Launching the Project

1. Once the project has been built sucessfully, the **Build Project** button will disappear and an **Open Editor** button should be the only option you can select.
2. Click on the **Open Editor** button this will open the **Planet_Survival_Game** project.

## Opening the Gameplay Level

1. Once the Asset Processor has completed importing and processing a signifgance portion of the assets the O3DE Editor will open.
2. In the **Welcome to O3DE** splash screen select the **Open** button to open a new level.
3. This will open the **Open a Level** window
4. Select the Main level and click the open level to launch the level.
5. Once the level opens, the menu splash screen will ask you to mouse click to start the game.

**Controlling the Main Player**

**Navigation**

1. **The Main Player model can be moved around the level using Left Mouse Clicks.**

**Ending Turn**

1. The Main Player UI next to helment will show how many moves are left. Once all moves are out the End Turn on the upper left will turn green.

**License**

For terms please see the LICENSE\*.TXT files at the root of this repository.

For the sake of clarification licensing information can be also be found below.

| OPEN 3D ENGINE LICENSING |
| ------------------------ |
|                          |

| The default license for Open 3D Engine is the Apache License, Version 2.0 |
| ------------------------------------------------------------------------- |
|                                                                           |

| (see LICENSE_APACHE2.TXT); you may elect at your option to use the Open 3D |
| -------------------------------------------------------------------------- |
|                                                                            |

| Engine under the MIT License (see LICENSE_MIT.TXT). Contributions must be |
| ------------------------------------------------------------------------- |
|                                                                           |

| made under both licenses. |
| ------------------------- |
|                           |

|     |
| --- |
|     |

| THIRD PARTY COMPONENTS |
| ---------------------- |
|                        |

| Open 3D Engine requires the use of (and in some cases makes available to you) |
| ----------------------------------------------------------------------------- |
|                                                                               |

| software and assets that have been developed by third parties and are subject |
| ----------------------------------------------------------------------------- |
|                                                                               |

| to separate license terms (such as code licensed under other open source |
| ------------------------------------------------------------------------ |
|                                                                          |

| licenses). It is your responsibility to comply with the applicable licenses. |
| ---------------------------------------------------------------------------- |
|                                                                              |

| Information on third party materials, and the applicable license terms, are |
| --------------------------------------------------------------------------- |
|                                                                             |

| referenced in or included with the materials, such as in separate LICENSE.txt |
| ----------------------------------------------------------------------------- |
|                                                                               |

| files accompanying the materials. |
| --------------------------------- |
|                                   |

|     |
| --- |
|     |

| Please note that certain materials are subject to "copyleft" licenses, which |
| ---------------------------------------------------------------------------- |
|                                                                              |

| require distribution of source code, including: |
| ----------------------------------------------- |
|                                                 |

|     |
| --- |
|     |

| - Qt Toolkit https://github.com/qtproject/, which is subject to the GNU |
| ----------------------------------------------------------------------- |
|                                                                         |

| Lesser General Public License version 3 (with certain exceptions). A copy of |
| ---------------------------------------------------------------------------- |
|                                                                              |

| the source code for Qt Toolkit may be found at |
| ---------------------------------------------- |
|                                                |

| https://s3-us-west-2.amazonaws.com/ly-legal/LicenseConformance/Qt/Src.zip |
| ------------------------------------------------------------------------- |
|                                                                           |

|     |
| --- |
|     |

| - The AWS Python SDK uses Chardet https://chardet.github.io/, which is |
| ---------------------------------------------------------------------- |
|                                                                        |

| subject to the GNU Lesser General Public License version 2.1. A copy of the |
| --------------------------------------------------------------------------- |
|                                                                             |

source code may be found at https://github.com/chardet/chardet.

| -  recastnavigation |
| ------------------- |
|                     |

| recastnavigation/recastnavigation is licensed under the zlib License |
| -------------------------------------------------------------------- |
|                                                                      |

https://github.com/recastnavigation/recastnavigation/blob/master/License.txt

