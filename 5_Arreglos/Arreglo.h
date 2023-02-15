#pragma once
class Arreglo
{
private:
	size_t count = 0;

	float* data;

public:
	size_t Count() {
		return count;
	}

	Arreglo(size_t _size) {
		data = (float*)malloc(_size);
		count = _size;

		//limpiar la basura
		memset(data, 0, _size);
	}

	void setVal(size_t index, float value) {
		if (index > count) {
			std::cout << "Error : index > arreglo count \n";
			return;
		}
		*(data + index) = value;
	}

	float getVal(size_t index) {
		if (index > count) {
			std::cout << "Error : index > arreglo count \n";
			return 0;
		}
		else {
			return *(data + index);
		}
	}

	void print() {
		for (int i = 0; i < count; i++) {
			std::cout << "[" << i << "] = " << getVal(i) << "\n";
		}
	}
};