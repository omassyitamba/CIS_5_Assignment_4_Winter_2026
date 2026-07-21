#include <iostream>
#include <iomanip>
using namespace std;

int calculateSum(const int scores[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return sum;
}

double calculateAverage(int sum, int size) {
	if (size == 0) return 0.0;
	return static_cast<double>(sum) / size;
}

void addBonus(int scores[], int size, int bonus) {
	for (int i = 0; i < size; i++) {
		scores[i] += bonus;
	}
}

int findMinimum(const int scores[], int size) {
	if (size == 0) return 0; // Return 0 for empty array
	int min = scores[0];
	for (int i = 1; i < size; i++) {
		if (scores[i] < min) {
			min = scores[i];
		}
	}
	return min;
}

int countHighPerformers(const int scores[], int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (scores[i] >= 80) {
			count++;
		}
	}
	return count;
}

void PrintScores(const int scores[], int size) {
	cout << "Scores: ";
	for (int i = 0; i < size; i++) {
		cout << scores[i] << " ";
	}
	cout << endl;
}

int main() {
	const int SIZE = 10;
	int scores[SIZE] = { 75, 88, 62, 95, 50, 82, 70, 91, 45, 78 };
	cout << "Original Scores: ";
	PrintScores(scores, SIZE);
	int sum = calculateSum(scores, SIZE);
	cout << "Sum of scores: " << sum << endl;
	double average = calculateAverage(sum, SIZE);
	cout << fixed << setprecision(2) << "Average score: " << average << endl;
	addBonus(scores, SIZE, 5);
	cout << "Scores after adding bonus: ";
	PrintScores(scores, SIZE);
	int minScore = findMinimum(scores, SIZE);
	cout << "Minimum score: " << minScore << endl;
	int highPerformers = countHighPerformers(scores, SIZE);
	cout << "Number of high performers (>=80): " << highPerformers << endl;
	return 0;
}