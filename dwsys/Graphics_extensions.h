#ifndef _Graphics_extensions_h_
#define _Graphics_extensions_h_
/* Graphics_extensions.h
 *
 * Copyright (C) 2012-2022 David Weenink
 *
 * This code is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This code is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this work. If not, see <http://www.gnu.org/licenses/>.
 */

#include "Graphics.h"
#include "Graphics_extensions_enums.h"

/*
	Get a font size to display at least 'maxNumberOfLines' of text that consistes of 
	'maxNumberOfCharacters_line' characters per line.
*/
double Graphics_getFontSizeInsideBox (Graphics g, double widthWC, double heightWC, double maxNumberOfCharacters_line, double maxNumberOfLines);


/**
	Draw a box plot of data [1..ndata]. The vertical center line of the plot
	is at position 'x'. The rectangle box is 2*w wide, the whisker 2*r.
	All drawing outside [ymin, ymax] is clipped.
*/
void Graphics_boxAndWhiskerPlot (Graphics g, constVEC data, double x, double r, double w, double ymin, double ymax);

void Graphics_quantileQuantilePlot (Graphics g, integer numberOfQuantiles, constVEC xdata, constVEC ydata,
	double xmin, double xmax, double ymin, double ymax, double labelSize, conststring32 plotLabel);

void Graphics_lagPlot (Graphics g, constVEC x, double xmin, double xmax, integer lag, double labelSize, conststring32 plotLabel);

#endif /* _Graphics_extensions_h_ */
