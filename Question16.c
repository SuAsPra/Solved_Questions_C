#include <stdio.h>

struct DEP_STORE {
    char store_name[50];
    char store_address[100];
    char phone_no[15];
};

struct STORE_ITEM {
    int item_number;
    char item_name[50];
    int available_qty;
    float item_price;
};

void generateReport(struct DEP_STORE store, struct STORE_ITEM items[], int n) {
    printf("Store Name: %s\n", store.store_name);
    printf("Store Address: %s\n", store.store_address);
    printf("Phone Number: %s\n\n", store.phone_no);

    printf("Item Number\tItem Name\tAvailable Quantity\tItem Price\n");

    float totalValue = 0.0;

    for (int i = 0; i < n; i++) {
        printf("%d\t\t%s\t\t%d\t\t%.2f\n", items[i].item_number, items[i].item_name,
               items[i].available_qty, items[i].item_price);

        totalValue += items[i].available_qty * items[i].item_price;
    }

    printf("\nTotal Item Value: Rs. %.2f\n", totalValue);
}

int main() {
    struct DEP_STORE store;

    scanf(" %[^\n]s", store.store_name);
    scanf(" %[^\n]s", store.store_address);
    scanf("%s", store.phone_no);

    int numItems;

    scanf("%d", &numItems);

    struct STORE_ITEM items[numItems];

    for (int i = 0; i < numItems; i++) {
        scanf("%d", &items[i].item_number);
        scanf(" %[^\n]s", items[i].item_name);
        scanf("%d", &items[i].available_qty);
        scanf("%f", &items[i].item_price);
    }

    generateReport(store, items, numItems);

    return 0;
}
