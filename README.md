# Vulkan_STL_Slicer
Single STL File Slicer based on Vulkan GL

## General Info

### History
1- Author: thebjtfellow
2- Start: 7 Nov 2022
3- Inspiration: https://youtube.com/playlist?list=PLFAIgTeqcARkeHm-RimFyKET6IZPxlBSt

### Purpose

This is meant to be a fast, light-weight slicer that creates bitmap stacks from an STL file. 

This is NOT meant to be an all-in-one solution for creating bitmaps from STL files. It will NOT support:
  Nesting
  STL healing and fixing
  Part replication
  Maybe scaling, but not guaranteed
  Maybe reorientation, but not guaranteed
  Grayscale
  Variable infill

Though it accepts only one file, multiple non-overlapping shells may exist in the same file.

It will support:
  Separate values for X, Y, and Z size and slicing thickness

###Output

It will output a stack of 1 bit per pixel BMP files encoded according to the BMP_INFO_HEADER_V4 spec
  0 Means no solid bit is present
  1 Means a solid bit is present
