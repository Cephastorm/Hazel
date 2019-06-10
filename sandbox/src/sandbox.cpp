
#include <Hazel.h>

class Sandbox :public Hazel::App {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Hazel::App* Hazel::CreateApplication() {
	return new Sandbox();
}