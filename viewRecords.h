using namespace std;

void printCategories();

void printRecord(record *records, int index);

int viewRecordPages(int numRow, int numCol, int &sizeArray, record *&records);

int ceilDivision(int number, int divisor);

void printSortingBy (string sortParameter, bool ascend);

void listRecords(int numRow, int numCol, record *records, int sizeArray, int page, int usedLines);

bool isInteger(string s);

void sortRecordPage(int numRow, int numCol, record *records, int &sizeArray, int page, int usedLines, string &sortParameter, bool &ascend);

void editFilteredRecordPage(int numRow, int numCol, record *&fRecords, int &fsizeArray, int page, int usedLines, string sortParameter, bool ascend, record *&records, int &sizeArray);