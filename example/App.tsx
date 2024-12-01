import {
  AppleAuthCredential,
  AppleAuthScopes,
  RNAppleAuth,
} from '@kazion/react-native-apple-auth';
import {useState} from 'react';
import {Button, SafeAreaView, Text} from 'react-native';

const App = () => {
  const [loading, setLoading] = useState(false);
  const [creds, setCreds] = useState<AppleAuthCredential | null>(null);

  const handleAppleSignin = async () => {
    setLoading(true);
    try {
      const appleAuthCredential = await RNAppleAuth.signIn({
        scopes: [AppleAuthScopes.EMAIL, AppleAuthScopes.FULL_NAME],
      });

      setCreds(appleAuthCredential);
    } catch (error) {
      console.log(JSON.stringify(error));
    } finally {
      setLoading(false);
    }
  };

  return (
    <SafeAreaView style={{flex: 1, backgroundColor: ''}}>
      <Text>Apple AUth With Nitro Modules</Text>
      <Text>Email: {creds?.email ?? 'No Email'}</Text>
      <Text>Full Name: {creds?.fullName ?? 'No Full Name'}</Text>
      <Button
        title={loading ? 'Loading...' : 'Sign in with Apple'}
        onPress={handleAppleSignin}
      />
    </SafeAreaView>
  );
};

export default App;
