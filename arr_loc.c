int count = 0;
    for (i = 0; i < n; i++) {
        if (array[i] == search) {
            printf("%d is present at location %d\n", search, i + 1);
            count += 1;
        }
    }
    
    if (count > 0) {
        printf("%d is present %d times in the array.\n", search, count);
    } else {
        printf("%d is not present in the array.\n", search);
    }
    
    return 0;
}
