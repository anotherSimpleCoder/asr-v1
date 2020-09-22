# ASR-v1

Documentation
-------------

ASR stands for "A Simple Renderer" and is a simple 2D Renderer, which is based on SDL and written in C++.

Get started
-----------
To use ASR you also have to get the SDL2 framework, which you can get here: https://www.libsdl.org/
After that you move the files to it's respective folders in your projects. 
(source files to source folder, header files to header folder)

In order to use the ASR commands add the following line on the beginning of your cpp file.

```cpp
#include "asr.h
```
That's it! You're now able to use the ASR "library".


Use ASR in your project
-----------------------
Now after we have included the ASR library to our project, let's see on how to use ASR. 

First of all we need to create an instance of the ASR class. We do that by typing in the following line
```cpp
asr a;
```

Now you can call every ASR function by typing
```cpp
a.<your asr function>;
```

ASR functions
-------------
All the functions, which are offered by ASR can be seen in the asr.h file with commands explaining the functionality and parameters of each function.
Nevertheless I will offer you a small overview of the functions, which are in the ASR library.

  * ```void initialize();```              Set's up the rendeerer and the window to show the rendered image.
  * ```int getBlockSize()```              Returns the block size.
  * ```void setBlockSize(int b)```        Changes the block size to the value b.
  * ```void setResolution(int w, int h)```Changes the window's resolution according to w and h (in pixels).
  * ```void draw(colorDim c, vect2D v)``` Draws a color c on the position specified through the 2-dimensional vector v.
  * ```void showRender(int t)```          Presents the rendered image on a window for a given time t.
  * ```void nextLine(vect2D v)```         Goes to the next row of the rendering grid by adding the block size to the y value of the vector y.
  * ```void quit()```                     Terminates ASR.
  
  
How does ASR work?
------------------
The window, where the rendered image will be presented can be thought of as a grid with a x and y axis. 
![alt text][logo]
[logo]: https://github.com/adam-p/markdown-here/raw/master/src/common/images/icon48.png "Logo Title Text 2"

The length of the x axis is determined by the defined screen width, while the length of the y axis is defined by the screen height.
The grid is contrcuted by so called "blocks", which is realised by squaqres in SDL. And every block has a block size b. 
Each block has the following properties:
  *a block size b (as mentioned earlier)
  *a color, which is realised by so called "colorDims", which is a 4-tuple of values, which represent a color in (R, G, B, A)
  *a position, which can be described through 2-dimensional vectors
 
 Now the rendering goes through the follwing steps:
  *1)The Initialiation
      In this phase the window and the renderer are being initialized according to the specified block size and screen resolution.
      The initial settings for the rendering are the following:
      
        - Block size: 100px
        - Screen resolution: 400x400 px
        
      However these settings can be changed by the setBlockSize and setResolution function.
  
  *2) The Drawing
      In the drawing phase the blocks colors are getting modified according to the given commands. This is being done by the draw function.
      As you can see the draw function requires two parameters: a color and a vector. The color will be specified in a colorDim as explained before and with the vector you are 
      specifying, which block on the grid should be colored.
      
  *3) The Presentation
      After the drawing phase the finished result will be presented on the window.
      
  *4) The Termination
      In the termination phase the framework SDL will be quitted so that it doesn't come to any complications and if the termination is sucessful it will return the value 0.
      

Some words for the end
----------------------
So yea this is just something, which I did out of boredom and I am not really an expert at this whole thing. So if there are any mistakes in both my code or explaination feel free to tell me. Also there is a main.cpp, which has a demonstration pattern and maybe that one also helps you to understand the aspects regarding ASR. Deleting that file won't affect the functionality of the library at all.

Here some plans I have for this project in the upcoming versions:
  *saving patterns in file, where these will also be described in a much more intuitive way (files with no C/C++ code so that people without C/C++ knowledge can do some stuff
   with ASR and save them)
  *doing an editor, where you have a User Interface to draw images, which will be then stored in a file and can be opened and recreated by ASR.
  
If you also have some ideas, feel free to tell me.
(If you're done reading this then I am probably currently intalling Ubuntu on a Virtual machine to test ASR there too)
