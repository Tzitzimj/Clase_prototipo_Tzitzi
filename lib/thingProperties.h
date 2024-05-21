#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>
void onOdorSelectChange();
void onStartChange();

int odor_select;
bool start;

void initProperties(){

  ArduinoCloud.addProperty(odor_select, READWRITE, ON_CHANGE, onOdorSelectChange);
  ArduinoCloud.addProperty(start, READWRITE, ON_CHANGE, onStartChange);

}

#include <QueueArray.h>