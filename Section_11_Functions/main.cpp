#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

void display_menu();
char get_selection();
void print_list(const vector<int>&);
void add_element_to_list(vector<int>&, bool);
void print_mean(const vector<int>&);
void print_smallest_number(const vector<int>&);
void print_largest_number(const vector<int>&);
void search_number(const vector<int>&);
void clear_list(vector<int>&);

int main() {

    vector<int> numbers;        // The list of numbers
    char selection{};

    do {
        display_menu();
        selection = get_selection();
        switch (selection) {
        case 'P':
            print_list(numbers);
            break;
        case 'A':
            add_element_to_list(numbers);
            break;
        case 'M':
            print_mean(numbers);
            break;
        case 'S':
            print_smallest_number(numbers);
            break;
        case 'L':
            print_largest_number(numbers);
            break;
        case 'F':
            search_number(numbers);
            break;
        case 'Q':
            cout << "Goodbye" << endl;
            break;
        default:
            cout << "Unknown input, please try again!" << endl;
        }
    } while (selection != 'Q');
    cout << endl;
    return 0;
}

void display_menu()
{
    cout << "==========================================" << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "F - Search number in the list and its occurence" << endl;
    cout << "C - Empty the list" << endl;
    cout << "D - Turn on/off allowing duplicate entries(default is on)" << endl;
    cout << "Q - Quit" << endl;
    cout << endl <<"Enter your choice: ";
}

char get_selection() //Input for the display choice
{
    char selection{};
    cin >> selection;
    return toupper(selection);
}

void print_list(const vector<int>& numbers) //Print numbers from the list
{
    if (numbers.size() == 0)
    {
        cout << "[] - the list is empty"<< endl;
        return;
    }
    cout << "[ ";
    for (size_t i = 0; i < numbers.size(); ++i)
    {
        cout << numbers[i] << " ";
    }
    cout << "]" << endl;
}

void add_element_to_list(vector<int>& numbers) //Add a number to the list
{
    int number;
    cout << "Enter an integer to add to the list: ";
    cin >> number;
    cout << endl;

    numbers.push_back(number);
    cout << number << " added" << endl;
    
}

void print_mean(const vector<int>& numbers) //Print the mean of the list of numbers
{
    if (numbers.size() == 0)
    {
        cout << "Unable to calculate the mean - no data" << endl;
        return;
    }
    int sum = 0;
    for (const auto& num : numbers)
        sum += num;
    cout << "The mean is : " << static_cast<double>(sum) / numbers.size() << endl;
}

void print_smallest_number(const vector<int>& numbers) //Print the smallest number in the list
{
    if (numbers.size() == 0)
    {
        cout << "Unable to determine the smallest number - list is empty" << endl;
        return;
    }
    int smallest;
    for (size_t i = 0; i < numbers.size(); ++i)
    {
        if (i == 0)
            smallest = numbers[i];
        else
            smallest = min(smallest, numbers[i]);
    }
    cout << "The smallest number is " << smallest << endl;
}

void print_largest_number(const vector<int>& numbers) //Print the largest number in the list
{
    if (numbers.size() == 0)
    {
        cout << "Unable to determine the largest number - list is empty" << endl;
        return;
    }
    int largest;
    for (size_t i = 0; i < numbers.size(); ++i)
    {
        if (i == 0)
            largest = numbers[i];
        else
            largest = max(largest, numbers[i]);
    }
    cout << "The largest number is " << largest << endl;
}

void search_number(const vector<int>& numbers) //Search for an number from the list
{
    if (numbers.size() == 0)
    {
        cout << "Unable to search the number - list is empty" << endl;
        return;
    }
    int number{};
    cout << "Enter an integer to search in the list: ";
    cin >> number;
    cout << endl;
    int occurs = 0;
    int index = -1;
    for (size_t i = 0; i < numbers.size(); ++i)
    {
        if (numbers[i] == number)
        {
            if (index == -1)
                index = i;
            ++occurs;
        }
    }
    if (index != -1)
        cout << number << " is in " << index << " position of the list and occurs " << occurs << " time" << (occurs == 1 ? "" : "s") << "\n";
    else
        cout << number << " does not exist in the list" << endl;
}

void clear_list(vector<int>& numbers) //Clear the list
{
    char select{};
    cout << "Are you sure that you want to delete all elements in the list?(y/n)";
    cin >> select;
    cout << endl;
    if (tolower(select) == 'y')
    {
        numbers.clear();
        cout << "Empty list successful" << endl;
    }
}