#include <iostream>
#include <string>

int main() {
	std::string str1;
	str1 = "This is my Git Hub  ";

	std::string str2;
	str2 = "It's under construction, as I just started self-studying C++ adn programming almost a month ago. I am about to enroll at CGSpectrum as a game development essentials sutdent!";

	std::string stR2;
	stR2 = " But if they are not as impressive as they should be, I will work much harder! I never give up, and I love to continually learn. Continuous learning throughout my career is important to me, just like habing excellent communication is!";

	std::string str3;
	str3 = "technical portfolio (all projects written in source code C++), with some projects featuring some Unreal Game Engine 5! ";

	std::cout << str1 + str3 << str2 << " However, like I said, I work on my studies daily as a full-time student and I will keep making more apps and games increasing in asthestic improvement and complexity as well as more use of Unreal Engine 5! " << " SO please be sure to follow me on Github! Thank you!";

	std::string str4 = " your goal";
	std::cout << " What is " << str4 << " for your career?";

	std::string myCareer;
	std::cin >> myCareer;

	std::cout << "That's a great goal to have, " << myCareer << "  as a long-term way of making a living! Stick with it!" << std::endl;

	std::cout << std::endl << std::endl;

	return 0;
}
