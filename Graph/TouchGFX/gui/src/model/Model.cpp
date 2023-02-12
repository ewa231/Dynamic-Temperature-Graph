#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <stm32f4xx_hal.h>

extern float temperature;

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	modelListener->UpdateGraph(temperature);
}
