#include <stdio.h>
#include <list>

int main(void) {
	std::list<const char*> yamanoteLine1970{ "Shin-Okubo", "Takadanobaba", "Mejiro",
"Ikebukuro", "Otsuka", "Sugamo", "Komagome", "Tabata", "Nippori", "Washiya", "Ueno",
"Okachimachi", "Akihabara", "Kanda", "Tokyo", "Yurakucho", "Shinbashi", "Hamamatsucho", "Tamachi",
"Shinagawa", "Osaki", "Gotanda", "Meguro", "Ebisu", "Shibuya", "Harajuku", "Yoyogi", "Shinjuku" };

	printf("1970年の山手線\n");
	for (auto itr = yamanoteLine1970.begin(); itr != yamanoteLine1970.end(); ++itr) {
		printf("%s, ", *itr);
	}

	printf("\n2019年の山手線\n");
	for (auto itr = yamanoteLine1970.begin(); itr != yamanoteLine1970.end(); ++itr) {
		if (*itr == "Nippori") {
			itr = yamanoteLine1970.insert(itr, "Nisi-nippori");
			printf("%s, ", *itr);
			itr++;
		}
		printf("%s, ", *itr);
	}

	printf("\n2022年の山手線\n");
	for (auto itr = yamanoteLine1970.begin(); itr != yamanoteLine1970.end(); ++itr) {
		if (*itr == "Shinagawa") {
			itr = yamanoteLine1970.insert(itr, "Takanawa Gateway");
			printf("%s, ", *itr);
			itr++;
		}
		printf("%s, ", *itr);
	}

}
