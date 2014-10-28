#define SIZE 10
void size(int arr[SIZE])
{
    printf("size of array is:%d\n",sizeof(arr));
}

int main()
{
    int arr[SIZE];

    //its doesnt work cause the param in size is a pointer
    size(arr);
    printf("%d\n", sizeof(arr) );
    return 0;
}