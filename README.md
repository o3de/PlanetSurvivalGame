<u>Supported o3de versions</u> : **24.09.2**

# Planet Survival Game: Point and Click, Turn Based Strategy Game (By Starr Shaw)

![GamePlay](https://user-images.githubusercontent.com/87207603/201390591-a88dd221-f9d2-4046-9a25-2d4b92052924.gif)

This game is a proof of concept for a 3D Point and Click, Turn Based Strategy Game. 

We start by landing on planet environment tile, with limited fuel, our first mission is to recharge are ship with locating a natural power on the planet in the form of Power Crystals. The Local residence of this area might not like this and attempt to stop this energy collection grab. We must explore the planet and find resources. The Planet is made of of procedural crafted squares with a variety of enemy encounters, puzzles, and task to perform. If you run out of power completely, or attack and loose an enemy fight, the game ends.

## Prerequisites

You need to build or [install O3DE engine](https://o3de.org/download/).

You need to [install git with lfs support](https://git-scm.com/downloads), and [setup a token on your github account](https://www.docs.o3de.org/docs/welcome-guide/setup/setup-from-github/#configure-credentials-for-git-lfs). Needed as the repository uses Git LFS, the "Download ZIP" button will not download assets.

## How to run

1. Clone the github repository (`git clone https://github.com/o3de/PlanetSurvivalGame.git`). When prompted to authenticate, use your github username and the token as password.
2. Launch O3DE. It will open the Project manager. Click on the **New Project** button then **Open Existing Project** option.
3. Navigate to the cloned repository. Open the **Project** folder. The project should now be registered.

![image](https://user-images.githubusercontent.com/87207603/201396468-0a13c0f8-8028-4121-bc4b-f4a36cf6c780.png)

4. Click on the **Build Project** button, located on the **Planet_Survival_Game** image.
5. Once the project has been built successfully, use the **Open Editor** button.
6. The asset pre-processor will run for a bit. Once it is over you will be welcomed with the **Open a Level** window, simply pick the first one.

## Controls

The Main Player model can be moved around the level using Left Mouse Clicks.
The Main Player UI next to the helmet will show how many moves are left. Once all moves are out the End Turn on the upper left will turn green.

## Project Highlights

<video controls src="https://user-images.githubusercontent.com/87207603/201387109-4a65bdb9-7f70-43f3-8ab0-f47d8416ba1f.mp4" title="## "></video>

- **Planet environment**, includes Many Size Rocks, Plants, Lava Spouts and Main Playing Island Grid.
- **Alien Explorer**, a ready to use character model, with multiple character animations such as, walk and attack. Is modular with Many Skin Attachments.
- **AI Player**, The Buggy AI Character will use the Nav Mesh to seek and move toward your Player character.
- **Script Canvas Visual Scripts,** editable Script Canvas visual scripts for main and in game menu interaction, gameplay and player movement.
- **Build dynamic levels with O3DE Vegetation System**

### Screenshots

![Main_Char](https://user-images.githubusercontent.com/87207603/201388588-d6bc5874-3e3e-4724-b8cc-e50b0fb8921b.gif)

![image(2)](https://user-images.githubusercontent.com/87207603/201387806-88ade873-1bbf-4f7a-a2d1-c1fad25cc6c1.png)

![image(3)](https://user-images.githubusercontent.com/87207603/201387824-baa998fa-1bd3-467f-9fc2-d170633ed1f1.png)

![image(6)](https://user-images.githubusercontent.com/87207603/201387893-7b570b7e-ccb6-45d5-a016-51e2ec35d233.png)

https://user-images.githubusercontent.com/87207603/201387317-6cfdab7f-df73-40d4-98ed-80b477a3d8bb.mp4

https://user-images.githubusercontent.com/87207603/201395614-0cf91fd3-a144-44f2-90f2-0d5e771826d2.mp4

## License

For terms please see the LICENSE\*.TXT files at the root of this repository.
Recastnavigation is licensed under the [zlib License](https://github.com/recastnavigation/recastnavigation/blob/master/License.txt)
