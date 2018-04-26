#include <string>
#include <windows.h>

#include <osgViewer/Viewer>
#include <osgDB/ReadFile>

std::string osgModelPath("..//..//..//OSGPractise//Resource//");

int main(int argc, char** argv)
{
	osgViewer::Viewer viewer;
	viewer.setSceneData(osgDB::readNodeFile(osgModelPath + "cow.osgt"));
	viewer.realize();
	viewer.run();
}