# FDPaint
Paint program implemented on Nexys3 FPGA with joystick + VGA screen

## Hardware Requirements: 
- Digilent Nexys 3 Board
- Joystick Module
- VGA connection + 640x480 screen

## Features

### VGA Driver
*Uses classic 640x480 60Hz resolution
*VGA reads pixel colors from pixel map for central 240x240 drawing region (but stretched 2x to 480x480)
*Loads possible tools on left sidebar from memory maps
*Changes pixel colours on right sidebar according to tool in use and colour choice

### Joystick
*Uses MISO input and SS, MOSI, SCLK outputs to send requests to joystick and receive X and Y coordinates back, along with left and right button presses 
*Cursor has two speeds, fast and slow, for each direction

### Pixel map
*Uses a simple dual port RAM (so we can write and read to/from different addresses at the same time)
*Code for both writing to (drawing) and reading from (displaying) the pixel map
*Learned the send and receive protocol 

### Color changing with switches
*8 switches available, 8 bit color -- it seemed natural!

### Pencil + Pencil Thickness
*Draws a square of a certain size around the cursor whenever joystick left button is pressed down
*Change pencil thickness by pressing right or left buttons 
*Needed to calculate which pixels to draw

### Stamp tools
*Stamps an image on the drawing region centered at the cursor whenever joystick left button is pressed
*Uses a dual-port ROM for reading from two addresses at once (for both displaying in the menu, and stamping on the pixel map)
*Support for transparency (because we have 8 bits of useful color info, without an alpha bit, we use pure blue, 00000011, as transparent)

### Menu
*Using up/down buttons to switch between tools (pencil, eraser, stamps)
*Use right/left buttons to switch between pencil thickness if on pencil mode or stamp choice if on stamp mode
*The cursor will take the shape of the current tool, with eraser being represented as a pink square.
*We also made many edits to make the product more user-friendly by making a black outline for the pencil and eraser so that users are aware of the tool they are using.


## Ideas
Note: Our design was so complex that we got ERROR: “This design does not fit into the number of slices available in this device due to the complexity of the design and/or constraints.”!!

### Long term goals:
*Tools such as line, circle, square, and/or other shapes
*Figure out how to work with constraints on FPGA since that was our main drawback for not implementing more tools
*Fill algorithm to do filling of shapes!
*Explore the possibility of saving images
*Undo back one step (would need to save old pixels in buffer)
*Visual menu on left sidebar with all stamp options
*Current tool displayed on top of right sidebar
