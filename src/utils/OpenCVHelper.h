/**
 * Copyright (C) 2015 Roman Hiestand
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software
 * and associated documentation files (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge, publish, distribute,
 * sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial
 * portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
 * LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#ifndef OPENCVHELPER_H
#define OPENCVHELPER_H

// OpenCV
#include "opencv2/imgproc/imgproc.hpp"

// OpenMVG
#include "openMVG/image/image_container.hpp"
#include "openMVG/image/pixel_types.hpp"

class OpenCVHelper
{
public:
	static void convertWxImageToCVMat(const wxImage &img, cv::Mat &cvimg);
	static void convertCVMatToWxImage(const cv::Mat &cvimg, wxImage &img);
	static openMVG::image::Image<openMVG::image::RGBColor> createThumbnail(
		const openMVG::image::Image<openMVG::image::RGBColor> &orig, int thWidth, int thHeight);

private:
	OpenCVHelper() { }
	virtual ~OpenCVHelper() { }
};

#endif
