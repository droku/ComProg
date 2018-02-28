import pandas as pd 
 
X = pd.read_csv('train.csv')
y = X.pop('Survived')
X["Age"].fillna(X.Age.mean(),inplace = True)

numeric_variables = list(X.dtypes[X.dtypes!="object"].index)
print(X[numeric_variables].head())
