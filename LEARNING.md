# What I Learned

CMake is a build system that helps configure and organize how a project is compiled. It reads `CMakeLists.txt` and generates the necessary build instructions. A compiler, such as g++, actually translates C++ source code into machine code. CMake manages the build process, while the compiler performs the compilation.

Git commands have different purposes. `git add` stages selected changes for the next commit. `git commit` saves those staged changes as a snapshot in my local repository. `git push` uploads my local commits to the remote GitHub repository. For example, I used these commands to commit and push my difficulty selector feature.

The merge conflict happened because the hints branch and the attempts branch modified the same section of `game.cpp`. One branch printed "Too low!" or "Too high!", while the other decreased the remaining attempts and checked for losing. I resolved it by keeping both features: decrementing attempts, checking for zero, and then displaying the directional hint if the game continued.

The most confusing part was understanding Git's merge diff and why it showed changes from both branches. I learned that a conflict does not necessarily mean the code is wrong; Git needs me to decide how both changes should fit together. I also learned to build and test my project after resolving conflicts and to keep unrelated files out of commits.
