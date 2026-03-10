#include <stdio.h>

int main() {
    int arr[] = {4, 5, 6, 5, 4, 3, 4, 6, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[n];
    
    // Initialize frequency array
    for(int i = 0; i < n; i++) {
        freq[i] = 0;
    }

    // Count frequency of each element
    for(int i = 0; i < n; i++) {
        if(freq[i] == -1)
            continue;
        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = -1; // mark as counted
            }
        }
        freq[i] = count;
    }

    // Sort based on frequency (descending)
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(freq[i] < freq[j]) {
                int temp = freq[i];
                freq[i] = freq[j];
                freq[j] = temp;

                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    // Print result
    printf("Output array:\n");
    for(int i = 0; i < n; i++) {
        if(freq[i] != -1)
            for(int j = 0; j < freq[i]; j++)
                printf("%d ", arr[i]);
    }

    return 0;
}