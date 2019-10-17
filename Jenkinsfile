pipeline {
    agent any
    stages {
        stage('Build') {
            steps {

                cmakeBuild buildDir: 'build',  cleanBuild: true, installation: 'inSearchPath', steps: [[withCmake: true]]
            }
        }
        stage('Test') {
            steps {
                dir('build') {
                    sh 'test/unittests -r junit -o result.xml'
                }
            }
            post {
                always {
                    xunit thresholds: [failed(failureNewThreshold: '0', failureThreshold: '0')], tools: [GoogleTest(deleteOutputFiles: false, failIfNotNew: true, pattern: 'build/result.xml', skipNoTestFiles: false, stopProcessingIfError: true)]
                }
            }
        }
    }
}
