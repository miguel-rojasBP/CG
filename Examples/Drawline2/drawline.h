#ifndef __DRAWLINE_H__
#define __DRAWLINE_H__

int **createRaster (int width, int height);
int **obtainPoints ();
double obtainSlope (int **points);
void calculate_line(int **points,int slope,int **raster);
void put_pixel(int x, int y, int **raster);
void draw(int **raster,int width,int height);

#endif
