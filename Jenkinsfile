pipeline {
    agent any

    stages {
        stage('build face api') {
            steps {
                echo 'Building face api..'
                sh '[ -n "$(docker images -q face-api:v1.0)" ] || bash setup/api.build.sh'
                sh 'bash setup/build_delivery.sh' 
            }
        }

        stage('test face api') {
            steps {
                echo 'Testing face api..'
            }
        }

        stage('deploy face api') {
            steps {
                 sh 'Deploy face api..'
            }
        }
    }
}
