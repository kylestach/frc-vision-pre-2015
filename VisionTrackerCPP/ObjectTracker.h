/*
 * ObjectTracker.h
 *
 *  Created on: Dec 15, 2014
 *      Author: Kyle
 */

#ifndef OBJECTTRACKER_H_
#define OBJECTTRACKER_H_

#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

class ObjectTracker {
public:
	cv::Mat x;
	ObjectTracker();
	virtual ~ObjectTracker();
};

#endif /* OBJECTTRACKER_H_ */
