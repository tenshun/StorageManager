//
// Created by Sad on 14.03.2016.
//

#ifndef COURSE_WORK_ALGO_XMLSERVICE_H
#define COURSE_WORK_ALGO_XMLSERVICE_H

#include <string>
#include "../../structure_module/include/Section.h"
#include "../../structure_module/include/Storage.h"


class XMLService {
public:
    static Storage<Section<std::string>> readXMLFromFile(std::string fileName);
    static void saveDataToFile(Storage<Section<std::string>> storageNode);
private:
    XMLService();
};


#endif //COURSE_WORK_ALGO_XMLSERVICE_H
